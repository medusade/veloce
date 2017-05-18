///////////////////////////////////////////////////////////////////////
/// Copyright (c) 1988-2017 $organization$
///
/// This software is provided by the author and contributors ``as is'' 
/// and any express or implied warranties, including, but not limited to, 
/// the implied warranties of merchantability and fitness for a particular 
/// purpose are disclaimed. In no event shall the author or contributors 
/// be liable for any direct, indirect, incidental, special, exemplary, 
/// or consequential damages (including, but not limited to, procurement 
/// of substitute goods or services; loss of use, data, or profits; or 
/// business interruption) however caused and on any theory of liability, 
/// whether in contract, strict liability, or tort (including negligence 
/// or otherwise) arising in any way out of the use of this software, 
/// even if advised of the possibility of such damage.
///
///   File: main.hpp
///
/// Author: $author$
///   Date: 5/2/2017
///////////////////////////////////////////////////////////////////////
#ifndef _VELOCE_NADIR_APP_CONSOLE_NETWORK_MAIN_HPP
#define _VELOCE_NADIR_APP_CONSOLE_NETWORK_MAIN_HPP

#include "veloce/nadir/console/getopt/main.hpp"
#include "veloce/nadir/app/console/network/main_opt.hpp"
#include "rete/nadir/network/socket_observer.hpp"
#include "rete/nadir/network/os/socket.hpp"
#include "rete/nadir/network/ip/tcp/transport.hpp"
#include "rete/nadir/network/ip/transport.hpp"
#include "rete/nadir/network/transport.hpp"
#include "rete/nadir/network/ip/v6/endpoint.hpp"
#include "rete/nadir/network/ip/v4/endpoint.hpp"
#include "rete/nadir/network/ip/endpoint.hpp"
#include "rete/nadir/network/endpoint.hpp"

namespace veloce {
namespace app {
namespace console {
namespace network {

typedef veloce::console::getopt::maint_implements maint_implements;
typedef veloce::console::getopt::main maint_extends;
///////////////////////////////////////////////////////////////////////
///  Class: maint
///////////////////////////////////////////////////////////////////////
template
<class TObserverImplements = rete::network::socket_observer,
 class TImplements = maint_implements, class TExtends = maint_extends>
class _EXPORT_CLASS maint
: virtual public TObserverImplements,
  virtual public TImplements, public TExtends {
public:
    typedef TImplements Implements;
    typedef TExtends Extends;
    typedef maint Derives;

    typedef typename Extends::char_t char_t;
    typedef typename Extends::end_char_t end_char_t;
    enum { end_char = Extends::end_char };

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    maint()
    : client_host_("localhost"), server_host_(""),
      client_port_(80), server_port_(8080),
      client_request_("GET / HTTP/1.0\r\n\r\n"),
      server_response_("HTTP/1.0 200 OK\r\n\r\nHello\r\n") {
    }
    virtual ~maint() {
    }

protected:
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual int run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if ((run_)) {
            err = (this->*run_)(argc, argv, env);
        } else {
            err = this->usage(argc, argv, env);
        }
        return err;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual int run_tcp_client(int argc, char_t** argv, char_t** env) {
        int err = 0;
        try {
            rete::network::ip::v4::endpoint ep(this->client_host(), this->client_port());
            rete::network::ip::tcp::transport tp;
            rete::network::os::socket sk;

            if ((sk.open(tp))) {
                if ((sk.connect(ep))) {
                    const char* chars = 0;
                    size_t length = 0;

                    if ((chars = this->client_request_.has_chars(length))) {
                        if (0 < (sk.send(chars, length, 0))) {
                            ssize_t count = 0;

                            if (0 < (count = this->recv_response(*this, sk))) {
                            }
                        }
                    }
                }
            }
        } catch (const rete::attach_exception& e) {
            CRONO_LOG_ERROR("...caught rete::attach_exception& e = " << e.status() << " " << e.status_to_chars() << " ");
        }
        return err;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual int run_tcp_server(int argc, char_t** argv, char_t** env) {
        int err = 0;
        try {
            rete::network::ip::v4::endpoint ep(this->server_host(), this->server_port());
            rete::network::ip::tcp::transport tp;
            rete::network::os::socket ask, sk;

            if ((ask.open(tp))) {
                if ((ask.listen(ep))) {
                    for (bool done = false; !done; ) {
                        if ((ask.accept(sk, ep))) {
                            ssize_t count = 0;

                            if (0 < (count = this->recv_request(*this, sk))) {
                                const char* chars = 0;
                                size_t length = 0;

                                if ((chars = this->server_response_.has_chars(length))) {
                                    if (0 < (sk.send(chars, length, 0))) {
                                    }
                                }
                            }
                            sk.close();
                        }
                        done = true;
                    }
                }
                ask.close();
            }
        } catch (const rete::attach_exception& e) {
            CRONO_LOG_ERROR("...caught rete::attach_exception& e = " << e.status() << " " << e.status_to_chars() << " ");
        }
        return err;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual ssize_t recv_request
    (rete::network::socket_observer& observer, rete::network::socket& sk) {
        ssize_t count = 0, amount = 0;
        char buf[1024];
        do {
            if (0 < (amount = sk.recv(buf, 1023, 0))) {
                observer.on_recv(buf, amount);
                count += amount;
            }
        } while ((0 < (amount)) && (amount == (1023)));
        return count;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual ssize_t recv_response
    (rete::network::socket_observer& observer, rete::network::socket& sk) {
        ssize_t count = 0, amount = 0;
        char buf[1024];
        do {
            if (0 < (amount = sk.recv(buf, 1023, 0))) {
                observer.on_recv(buf, amount);
                count += amount;
            }
        } while ((0 < (amount)) && (amount == (1023)));
        return count;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual void on_send(const void* buf, size_t len) {
    }
    virtual void on_recv(const void* buf, size_t len) {
        const char_t* chars = 0;
        if ((chars = ((char_t*)buf)) && (len)) {
            this->out(chars, len);
        }
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual const char_t* host() const {
        return client_host();
    }
    virtual unsigned port() const {
        return client_port();
    }
    virtual const char_t* client_host() const {
        return client_host_.chars();
    }
    virtual unsigned client_port() const {
        return client_port_;
    }
    virtual const char_t* server_host() const {
        return server_host_.chars();
    }
    virtual unsigned server_port() const {
        return server_port_;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual int set_client(const char_t* optarg = 0) {
        run_ = &Derives::run_tcp_client;
        return 0;
    }
    virtual int set_server(const char_t* optarg = 0) {
        run_ = &Derives::run_tcp_server;
        return 0;
    }
    virtual int set_host(const char_t* optarg = 0) {
        return 0;
    }
    virtual int set_port(const char_t* optarg = 0) {
        return 0;
    }
    virtual int set_family(const char_t* optarg = 0) {
        return 0;
    }
    virtual int set_transport(const char_t* optarg = 0) {
        return 0;
    }

#include "veloce/nadir/app/console/network/main_opt.cpp"
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
protected:
    typedef int (Derives::*run_t)(int argc, char_t** argv, char_t** env);
    run_t run_;
    char_string_t client_host_, server_host_;
    ushort client_port_, server_port_;
    char_string_t client_request_, server_response_, request_, response_;
};
typedef maint<> main;

} // namespace network 
} // namespace console 
} // namespace app 
} // namespace veloce 

#endif // _VELOCE_NADIR_APP_CONSOLE_NETWORK_MAIN_HPP 
