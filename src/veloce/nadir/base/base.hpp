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
///   File: base.hpp
///
/// Author: $author$
///   Date: 5/2/2017
///////////////////////////////////////////////////////////////////////
#ifndef _VELOCE_NADIR_BASE_BASE_HPP
#define _VELOCE_NADIR_BASE_BASE_HPP

#include "nadir/base/chars.hpp"
#include "nadir/base/array.hpp"
#include "nadir/base/string.hpp"

namespace veloce {

typedef nadir::implement_base ImplementBase;
typedef nadir::base Base;

typedef nadir::chars_t chars_t;
typedef nadir::tchars_t tchars_t;
typedef nadir::wchars_t wchars_t;

typedef nadir::char_array char_array;
typedef nadir::tchar_array tchar_array;
typedef nadir::wchar_array wchar_array;

typedef nadir::char_string char_string_t;
typedef nadir::tchar_string tchar_string_t;
typedef nadir::wchar_string wchar_string_t;

} // namespace veloce

#endif // _VELOCE_NADIR_BASE_BASE_HPP 
