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
///   File: main_opt.cpp
///
/// Author: $author$
///   Date: 5/3/2017
///////////////////////////////////////////////////////////////////////
#ifndef _VELOCE_NADIR_APP_CONSOLE_NETWORK_MAIN_HPP
#include "veloce/nadir/app/console/network/main_opt.hpp"

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
<class TImplements = maint_implements, class TExtends = maint_extends>
class _EXPORT_CLASS maint: virtual public TImplements,public TExtends {
public:
    typedef TImplements Implements;
    typedef TExtends Extends;
#endif // _VELOCE_NADIR_APP_CONSOLE_NETWORK_MAIN_HPP

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual int on_client_option
    (int optval, const char* optarg,
     const char* optname, int optind,
     int argc, char**argv, char**env) {
        int err = set_client();
        return err;
    }
    ///////////////////////////////////////////////////////////////////////
    virtual int on_server_option
    (int optval, const char* optarg,
     const char* optname, int optind,
     int argc, char**argv, char**env) {
        int err = set_server();
        return err;
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual int on_host_option
    (int optval, const char* optarg,
     const char* optname, int optind,
     int argc, char**argv, char**env) {
        int err = set_host(optarg);
        return err;
    }
    ///////////////////////////////////////////////////////////////////////
    virtual int on_port_option
    (int optval, const char* optarg,
     const char* optname, int optind,
     int argc, char**argv, char**env) {
        int err = set_port(optarg);
        return err;
    }
    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual int on_family_option
    (int optval, const char* optarg,
     const char* optname, int optind,
     int argc, char**argv, char**env) {
        int err = set_family(optarg);
        return err;
    }
    ///////////////////////////////////////////////////////////////////////
    virtual int on_transport_option
    (int optval, const char* optarg,
     const char* optname, int optind,
     int argc, char**argv, char**env) {
        int err = set_transport(optarg);
        return err;
    }

    ///////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////
    virtual int on_option
    (int optval, const char* optarg,
     const char* optname, int optind,
     int argc, char**argv, char**env) {
        int err = 0;
        switch(optval) {
        case VELOCE_APP_CONSOLE_NETWORK_MAIN_CLIENT_OPTVAL_C:
            err = on_client_option
            (optval, optarg, optname, optind, argc, argv, env);
            break;
        case VELOCE_APP_CONSOLE_NETWORK_MAIN_SERVER_OPTVAL_C:
            err = on_server_option
            (optval, optarg, optname, optind, argc, argv, env);
            break;
        case VELOCE_APP_CONSOLE_NETWORK_MAIN_HOST_OPTVAL_C:
            err = on_host_option
            (optval, optarg, optname, optind, argc, argv, env);
            break;
        case VELOCE_APP_CONSOLE_NETWORK_MAIN_PORT_OPTVAL_C:
            err = on_port_option
            (optval, optarg, optname, optind, argc, argv, env);
            break;
        case VELOCE_APP_CONSOLE_NETWORK_MAIN_FAMILY_OPTVAL_C:
            err = on_family_option
            (optval, optarg, optname, optind, argc, argv, env);
            break;
        case VELOCE_APP_CONSOLE_NETWORK_MAIN_TRANSPORT_OPTVAL_C:
            err = on_transport_option
            (optval, optarg, optname, optind, argc, argv, env);
            break;
        default:
            err = Extends::on_option
            (optval, optarg, optname, optind, argc, argv, env);
        }
        return err;
    }
    ///////////////////////////////////////////////////////////////////////
    virtual const char* option_usage
    (const char*& optarg, const struct option* longopt) {
        const char* chars = "";
        switch(longopt->val) {
        case VELOCE_APP_CONSOLE_NETWORK_MAIN_CLIENT_OPTVAL_C:
            optarg = VELOCE_APP_CONSOLE_NETWORK_MAIN_CLIENT_OPTARG;
            chars = VELOCE_APP_CONSOLE_NETWORK_MAIN_CLIENT_OPTUSE;
            break;
        case VELOCE_APP_CONSOLE_NETWORK_MAIN_SERVER_OPTVAL_C:
            optarg = VELOCE_APP_CONSOLE_NETWORK_MAIN_SERVER_OPTARG;
            chars = VELOCE_APP_CONSOLE_NETWORK_MAIN_SERVER_OPTUSE;
            break;
        case VELOCE_APP_CONSOLE_NETWORK_MAIN_HOST_OPTVAL_C:
            optarg = VELOCE_APP_CONSOLE_NETWORK_MAIN_HOST_OPTARG;
            chars = VELOCE_APP_CONSOLE_NETWORK_MAIN_HOST_OPTUSE;
            break;
        case VELOCE_APP_CONSOLE_NETWORK_MAIN_PORT_OPTVAL_C:
            optarg = VELOCE_APP_CONSOLE_NETWORK_MAIN_PORT_OPTARG;
            chars = VELOCE_APP_CONSOLE_NETWORK_MAIN_PORT_OPTUSE;
            break;
        case VELOCE_APP_CONSOLE_NETWORK_MAIN_FAMILY_OPTVAL_C:
            optarg = VELOCE_APP_CONSOLE_NETWORK_MAIN_FAMILY_OPTARG;
            chars = VELOCE_APP_CONSOLE_NETWORK_MAIN_FAMILY_OPTUSE;
            break;
        case VELOCE_APP_CONSOLE_NETWORK_MAIN_TRANSPORT_OPTVAL_C:
            optarg = VELOCE_APP_CONSOLE_NETWORK_MAIN_TRANSPORT_OPTARG;
            chars = VELOCE_APP_CONSOLE_NETWORK_MAIN_TRANSPORT_OPTUSE;
            break;
        default:
            chars = Extends::option_usage(optarg, longopt);
        }
        return chars;
    }
    ///////////////////////////////////////////////////////////////////////
    virtual const char* options(const struct option*& longopts) {
        int err = 0;
        static const char* chars = VELOCE_APP_CONSOLE_NETWORK_MAIN_OPTIONS_CHARS;
        static struct option optstruct[]= {
            VELOCE_APP_CONSOLE_NETWORK_MAIN_OPTIONS_OPTIONS
            {0, 0, 0, 0}};
        longopts = optstruct;
        return chars;
    }

#ifndef _VELOCE_NADIR_APP_CONSOLE_NETWORK_MAIN_HPP
};

} // namespace network
} // namespace console 
} // namespace app 
} // namespace veloce 
#endif // _VELOCE_NADIR_APP_CONSOLE_NETWORK_MAIN_HPP
