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
#ifndef _VELOCE_NADIR_APP_CONSOLE_HELLO_MAIN_HPP
#define _VELOCE_NADIR_APP_CONSOLE_HELLO_MAIN_HPP

#include "veloce/nadir/app/console/network/main.hpp"
#include "rete/nadir/network/ip/v6/endpoint.hpp"
#include "rete/nadir/network/ip/v4/endpoint.hpp"
#include "rete/nadir/network/ip/endpoint.hpp"
#include "rete/nadir/network/endpoint.hpp"
#include "fila/nadir/mt/os/thread.hpp"
#include "fila/nadir/mt/os/semaphore.hpp"
#include "fila/nadir/mt/os/mutex.hpp"
#include "crono/nadir/io/logger.hpp"

namespace veloce {
namespace app {
namespace console {
namespace hello {

typedef network::maint_implements maint_implements;
typedef network::main maint_extends;
///////////////////////////////////////////////////////////////////////
///  Class: maint
///////////////////////////////////////////////////////////////////////
template
<class TImplements = maint_implements, class TExtends = maint_extends>

class _EXPORT_CLASS maint: virtual public TImplements, public TExtends {
public:
    typedef TImplements Implements;
    typedef TExtends Extends;

    typedef typename Extends::char_t char_t;
    typedef typename Extends::end_char_t end_char_t;
    enum { end_char = Extends::end_char };

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    maint() {
    }
    virtual ~maint() {
    }

protected:
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    class ran: public fila::ran {
    public:
        ran(fila::mt::semaphore& sem): sem_(sem) {}
        virtual void run() {
            CRONO_LOG_DEBUG("usleep(5000000)...");
            usleep(5000000);
            sem_.release();
        }
    protected:
        fila::mt::semaphore& sem_;
    };
    virtual int run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        try {
            rete::network::ip::v6::endpoint ep(this->host(), this->port());
        } catch (const rete::attach_exception& e) {
            CRONO_LOG_ERROR("...caught rete::attach_exception& e = " << e.status() << " " << e.status_to_chars() << " ");
        }
        /*try {
            fila::mt::os::semaphore sem;
            try {
                maint::ran ran(sem);
                fila::mt::os::thread thread(ran);
                fila::waiter waiter(sem, 500);
            } catch (const fila::create_exception& e) {
                CRONO_LOG_ERROR("...caught fila::create_exception& e = " << e.status() << " " << e.status_to_chars() << " ");
            }
        } catch (const fila::wait_exception& e) {
            CRONO_LOG_ERROR("...caught fila::wait_exception& e = " << e.status() << " " << e.status_to_chars() << "");
        }*/
        CRONO_LOG_DEBUG("...");
        return err;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
};
typedef maint<> main;

} // namespace hello 
} // namespace console 
} // namespace app 
} // namespace veloce 

#endif // _VELOCE_NADIR_APP_CONSOLE_HELLO_MAIN_HPP 
