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
///   Date: 5/2/2017
///////////////////////////////////////////////////////////////////////
#ifndef _VELOCE_NADIR_CONSOLE_GETOPT_MAIN_OPT_HPP
#define _VELOCE_NADIR_CONSOLE_GETOPT_MAIN_OPT_HPP

#include "veloce/nadir/console/main.hpp"
#include "nadir/console/getopt/main_opt.hpp"

///////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////
enum {
    VELOCE_CONSOLE_GETOPT_MAIN_OPT_ARGUMENT_NONE     = NADIR_CONSOLE_GETOPT_MAIN_OPT_ARGUMENT_NONE,
    VELOCE_CONSOLE_GETOPT_MAIN_OPT_ARGUMENT_REQUIRED = NADIR_CONSOLE_GETOPT_MAIN_OPT_ARGUMENT_REQUIRED,
    VELOCE_CONSOLE_GETOPT_MAIN_OPT_ARGUMENT_OPTIONAL = NADIR_CONSOLE_GETOPT_MAIN_OPT_ARGUMENT_OPTIONAL
};

///////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////
#define VELOCE_CONSOLE_GETOPT_MAIN_OPTIONS_CHARS \
    NADIR_CONSOLE_GETOPT_MAIN_OPTIONS_CHARS

#define VELOCE_CONSOLE_GETOPT_MAIN_OPTIONS_OPTIONS \
    NADIR_CONSOLE_GETOPT_MAIN_OPTIONS_OPTIONS

///////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////
namespace veloce {

///////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////
enum {
    MAIN_OPT_ARGUMENT_NONE     = VELOCE_CONSOLE_GETOPT_MAIN_OPT_ARGUMENT_NONE,
    MAIN_OPT_ARGUMENT_REQUIRED = VELOCE_CONSOLE_GETOPT_MAIN_OPT_ARGUMENT_REQUIRED,
    MAIN_OPT_ARGUMENT_OPTIONAL = VELOCE_CONSOLE_GETOPT_MAIN_OPT_ARGUMENT_OPTIONAL
};

namespace console {
namespace getopt {

} // namespace getopt 
} // namespace console 
} // namespace veloce 

#endif // _VELOCE_NADIR_CONSOLE_GETOPT_MAIN_OPT_HPP 
