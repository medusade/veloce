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
///   File: main_opt.hpp
///
/// Author: $author$
///   Date: 5/3/2017
///////////////////////////////////////////////////////////////////////
#ifndef _VELOCE_NADIR_APP_CONSOLE_NETWORK_MAIN_OPT_HPP
#define _VELOCE_NADIR_APP_CONSOLE_NETWORK_MAIN_OPT_HPP

#include "veloce/nadir/console/getopt/main.hpp"

///////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////
#define VELOCE_APP_CONSOLE_NETWORK_MAIN_CLIENT_OPT "client"
#define VELOCE_APP_CONSOLE_NETWORK_MAIN_CLIENT_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define VELOCE_APP_CONSOLE_NETWORK_MAIN_CLIENT_OPTARG_RESULT 0
#define VELOCE_APP_CONSOLE_NETWORK_MAIN_CLIENT_OPTARG ""
#define VELOCE_APP_CONSOLE_NETWORK_MAIN_CLIENT_OPTUSE "Run as client"
#define VELOCE_APP_CONSOLE_NETWORK_MAIN_CLIENT_OPTVAL_S "c"
#define VELOCE_APP_CONSOLE_NETWORK_MAIN_CLIENT_OPTVAL_C 'c'
#define VELOCE_APP_CONSOLE_NETWORK_MAIN_CLIENT_OPTION \
   {VELOCE_APP_CONSOLE_NETWORK_MAIN_CLIENT_OPT, \
    VELOCE_APP_CONSOLE_NETWORK_MAIN_CLIENT_OPTARG_REQUIRED, \
    VELOCE_APP_CONSOLE_NETWORK_MAIN_CLIENT_OPTARG_RESULT, \
    VELOCE_APP_CONSOLE_NETWORK_MAIN_CLIENT_OPTVAL_C}, \

#define VELOCE_APP_CONSOLE_NETWORK_MAIN_SERVER_OPT "server"
#define VELOCE_APP_CONSOLE_NETWORK_MAIN_SERVER_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define VELOCE_APP_CONSOLE_NETWORK_MAIN_SERVER_OPTARG_RESULT 0
#define VELOCE_APP_CONSOLE_NETWORK_MAIN_SERVER_OPTARG ""
#define VELOCE_APP_CONSOLE_NETWORK_MAIN_SERVER_OPTUSE "Run as server"
#define VELOCE_APP_CONSOLE_NETWORK_MAIN_SERVER_OPTVAL_S "s"
#define VELOCE_APP_CONSOLE_NETWORK_MAIN_SERVER_OPTVAL_C 's'
#define VELOCE_APP_CONSOLE_NETWORK_MAIN_SERVER_OPTION \
   {VELOCE_APP_CONSOLE_NETWORK_MAIN_SERVER_OPT, \
    VELOCE_APP_CONSOLE_NETWORK_MAIN_SERVER_OPTARG_REQUIRED, \
    VELOCE_APP_CONSOLE_NETWORK_MAIN_SERVER_OPTARG_RESULT, \
    VELOCE_APP_CONSOLE_NETWORK_MAIN_SERVER_OPTVAL_C}, \

#define VELOCE_APP_CONSOLE_NETWORK_MAIN_HOST_OPT "host"
#define VELOCE_APP_CONSOLE_NETWORK_MAIN_HOST_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_REQUIRED
#define VELOCE_APP_CONSOLE_NETWORK_MAIN_HOST_OPTARG_RESULT 0
#define VELOCE_APP_CONSOLE_NETWORK_MAIN_HOST_OPTARG "{name | ddd.ddd.ddd.ddd | *}"
#define VELOCE_APP_CONSOLE_NETWORK_MAIN_HOST_OPTUSE "Host name, address or any"
#define VELOCE_APP_CONSOLE_NETWORK_MAIN_HOST_OPTVAL_S "o:"
#define VELOCE_APP_CONSOLE_NETWORK_MAIN_HOST_OPTVAL_C 'o'
#define VELOCE_APP_CONSOLE_NETWORK_MAIN_HOST_OPTION \
   {VELOCE_APP_CONSOLE_NETWORK_MAIN_HOST_OPT, \
    VELOCE_APP_CONSOLE_NETWORK_MAIN_HOST_OPTARG_REQUIRED, \
    VELOCE_APP_CONSOLE_NETWORK_MAIN_HOST_OPTARG_RESULT, \
    VELOCE_APP_CONSOLE_NETWORK_MAIN_HOST_OPTVAL_C}, \

#define VELOCE_APP_CONSOLE_NETWORK_MAIN_PORT_OPT "port"
#define VELOCE_APP_CONSOLE_NETWORK_MAIN_PORT_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_REQUIRED
#define VELOCE_APP_CONSOLE_NETWORK_MAIN_PORT_OPTARG_RESULT 0
#define VELOCE_APP_CONSOLE_NETWORK_MAIN_PORT_OPTARG "{0..2^16-1}"
#define VELOCE_APP_CONSOLE_NETWORK_MAIN_PORT_OPTUSE "Port number"
#define VELOCE_APP_CONSOLE_NETWORK_MAIN_PORT_OPTVAL_S "p:"
#define VELOCE_APP_CONSOLE_NETWORK_MAIN_PORT_OPTVAL_C 'p'
#define VELOCE_APP_CONSOLE_NETWORK_MAIN_PORT_OPTION \
   {VELOCE_APP_CONSOLE_NETWORK_MAIN_PORT_OPT, \
    VELOCE_APP_CONSOLE_NETWORK_MAIN_PORT_OPTARG_REQUIRED, \
    VELOCE_APP_CONSOLE_NETWORK_MAIN_PORT_OPTARG_RESULT, \
    VELOCE_APP_CONSOLE_NETWORK_MAIN_PORT_OPTVAL_C}, \

#define VELOCE_APP_CONSOLE_NETWORK_MAIN_FAMILY_OPT "family"
#define VELOCE_APP_CONSOLE_NETWORK_MAIN_FAMILY_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_REQUIRED
#define VELOCE_APP_CONSOLE_NETWORK_MAIN_FAMILY_OPTARG_RESULT 0
#define VELOCE_APP_CONSOLE_NETWORK_MAIN_FAMILY_OPTARG_LOCAL_C "l"
#define VELOCE_APP_CONSOLE_NETWORK_MAIN_FAMILY_OPTARG_LOCAL "local"
#define VELOCE_APP_CONSOLE_NETWORK_MAIN_FAMILY_OPTARG_IPV4_C "4"
#define VELOCE_APP_CONSOLE_NETWORK_MAIN_FAMILY_OPTARG_IPV4 "ipv4"
#define VELOCE_APP_CONSOLE_NETWORK_MAIN_FAMILY_OPTARG_IPV6_C "6"
#define VELOCE_APP_CONSOLE_NETWORK_MAIN_FAMILY_OPTARG_IPV6 "ipv6"
#define VELOCE_APP_CONSOLE_NETWORK_MAIN_FAMILY_OPTARG "{ "\
    "(" VELOCE_APP_CONSOLE_NETWORK_MAIN_FAMILY_OPTARG_LOCAL_C ")" \
    VELOCE_APP_CONSOLE_NETWORK_MAIN_FAMILY_OPTARG_LOCAL " | " \
    "(" VELOCE_APP_CONSOLE_NETWORK_MAIN_FAMILY_OPTARG_IPV4_C ")" \
    VELOCE_APP_CONSOLE_NETWORK_MAIN_FAMILY_OPTARG_IPV4 " | " \
    "(" VELOCE_APP_CONSOLE_NETWORK_MAIN_FAMILY_OPTARG_IPV6_C ")" \
    VELOCE_APP_CONSOLE_NETWORK_MAIN_FAMILY_OPTARG_IPV6 " }"
#define VELOCE_APP_CONSOLE_NETWORK_MAIN_FAMILY_OPTUSE "Address family"
#define VELOCE_APP_CONSOLE_NETWORK_MAIN_FAMILY_OPTVAL_S "f:"
#define VELOCE_APP_CONSOLE_NETWORK_MAIN_FAMILY_OPTVAL_C 'f'
#define VELOCE_APP_CONSOLE_NETWORK_MAIN_FAMILY_OPTION \
   {VELOCE_APP_CONSOLE_NETWORK_MAIN_FAMILY_OPT, \
    VELOCE_APP_CONSOLE_NETWORK_MAIN_FAMILY_OPTARG_REQUIRED, \
    VELOCE_APP_CONSOLE_NETWORK_MAIN_FAMILY_OPTARG_RESULT, \
    VELOCE_APP_CONSOLE_NETWORK_MAIN_FAMILY_OPTVAL_C}, \

#define VELOCE_APP_CONSOLE_NETWORK_MAIN_TRANSPORT_OPT "transport"
#define VELOCE_APP_CONSOLE_NETWORK_MAIN_TRANSPORT_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_REQUIRED
#define VELOCE_APP_CONSOLE_NETWORK_MAIN_TRANSPORT_OPTARG_RESULT 0
#define VELOCE_APP_CONSOLE_NETWORK_MAIN_TRANSPORT_OPTARG_RAW_C "r"
#define VELOCE_APP_CONSOLE_NETWORK_MAIN_TRANSPORT_OPTARG_RAW "raw"
#define VELOCE_APP_CONSOLE_NETWORK_MAIN_TRANSPORT_OPTARG_STREAM_C "s"
#define VELOCE_APP_CONSOLE_NETWORK_MAIN_TRANSPORT_OPTARG_STREAM "stream"
#define VELOCE_APP_CONSOLE_NETWORK_MAIN_TRANSPORT_OPTARG_DGRAM_C "d"
#define VELOCE_APP_CONSOLE_NETWORK_MAIN_TRANSPORT_OPTARG_DGRAM "dgram"
#define VELOCE_APP_CONSOLE_NETWORK_MAIN_TRANSPORT_OPTARG_TCP_C "t"
#define VELOCE_APP_CONSOLE_NETWORK_MAIN_TRANSPORT_OPTARG_TCP "tcp"
#define VELOCE_APP_CONSOLE_NETWORK_MAIN_TRANSPORT_OPTARG_UDP_C "u"
#define VELOCE_APP_CONSOLE_NETWORK_MAIN_TRANSPORT_OPTARG_UDP "udp"
#define VELOCE_APP_CONSOLE_NETWORK_MAIN_TRANSPORT_OPTARG "{ " \
    "(" VELOCE_APP_CONSOLE_NETWORK_MAIN_TRANSPORT_OPTARG_RAW_C ")" \
    VELOCE_APP_CONSOLE_NETWORK_MAIN_TRANSPORT_OPTARG_RAW " | " \
    "(" VELOCE_APP_CONSOLE_NETWORK_MAIN_TRANSPORT_OPTARG_STREAM_C ")" \
    VELOCE_APP_CONSOLE_NETWORK_MAIN_TRANSPORT_OPTARG_STREAM "/" \
    "(" VELOCE_APP_CONSOLE_NETWORK_MAIN_TRANSPORT_OPTARG_TCP_C ")" \
    VELOCE_APP_CONSOLE_NETWORK_MAIN_TRANSPORT_OPTARG_TCP " | " \
    "(" VELOCE_APP_CONSOLE_NETWORK_MAIN_TRANSPORT_OPTARG_DGRAM_C ")" \
    VELOCE_APP_CONSOLE_NETWORK_MAIN_TRANSPORT_OPTARG_DGRAM "/" \
    "(" VELOCE_APP_CONSOLE_NETWORK_MAIN_TRANSPORT_OPTARG_UDP_C ")" \
    VELOCE_APP_CONSOLE_NETWORK_MAIN_TRANSPORT_OPTARG_UDP " }"
#define VELOCE_APP_CONSOLE_NETWORK_MAIN_TRANSPORT_OPTUSE "Transport type"
#define VELOCE_APP_CONSOLE_NETWORK_MAIN_TRANSPORT_OPTVAL_S "t:"
#define VELOCE_APP_CONSOLE_NETWORK_MAIN_TRANSPORT_OPTVAL_C 't'
#define VELOCE_APP_CONSOLE_NETWORK_MAIN_TRANSPORT_OPTION \
   {VELOCE_APP_CONSOLE_NETWORK_MAIN_TRANSPORT_OPT, \
    VELOCE_APP_CONSOLE_NETWORK_MAIN_TRANSPORT_OPTARG_REQUIRED, \
    VELOCE_APP_CONSOLE_NETWORK_MAIN_TRANSPORT_OPTARG_RESULT, \
    VELOCE_APP_CONSOLE_NETWORK_MAIN_TRANSPORT_OPTVAL_C}, \

///////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////
#define VELOCE_APP_CONSOLE_NETWORK_MAIN_OPTIONS_CHARS \
   VELOCE_APP_CONSOLE_NETWORK_MAIN_CLIENT_OPTVAL_S \
   VELOCE_APP_CONSOLE_NETWORK_MAIN_SERVER_OPTVAL_S \
   VELOCE_APP_CONSOLE_NETWORK_MAIN_HOST_OPTVAL_S \
   VELOCE_APP_CONSOLE_NETWORK_MAIN_PORT_OPTVAL_S \
   VELOCE_APP_CONSOLE_NETWORK_MAIN_FAMILY_OPTVAL_S \
   VELOCE_APP_CONSOLE_NETWORK_MAIN_TRANSPORT_OPTVAL_S \
   VELOCE_CONSOLE_GETOPT_MAIN_OPTIONS_CHARS

#define VELOCE_APP_CONSOLE_NETWORK_MAIN_OPTIONS_OPTIONS \
   VELOCE_APP_CONSOLE_NETWORK_MAIN_CLIENT_OPTION \
   VELOCE_APP_CONSOLE_NETWORK_MAIN_SERVER_OPTION \
   VELOCE_APP_CONSOLE_NETWORK_MAIN_HOST_OPTION \
   VELOCE_APP_CONSOLE_NETWORK_MAIN_PORT_OPTION \
   VELOCE_APP_CONSOLE_NETWORK_MAIN_FAMILY_OPTION \
   VELOCE_APP_CONSOLE_NETWORK_MAIN_TRANSPORT_OPTION \
   VELOCE_CONSOLE_GETOPT_MAIN_OPTIONS_OPTIONS

///////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////

namespace veloce {
namespace app {
namespace console {
namespace network {

} // namespace network 
} // namespace console 
} // namespace app 
} // namespace veloce 

#endif // _VELOCE_NADIR_APP_CONSOLE_NETWORK_MAIN_OPT_HPP 
