########################################################################
# Copyright (c) 1988-2017 $organization$
#
# This software is provided by the author and contributors ``as is''
# and any express or implied warranties, including, but not limited to,
# the implied warranties of merchantability and fitness for a particular
# purpose are disclaimed. In no event shall the author or contributors
# be liable for any direct, indirect, incidental, special, exemplary,
# or consequential damages (including, but not limited to, procurement
# of substitute goods or services; loss of use, data, or profits; or
# business interruption) however caused and on any theory of liability,
# whether in contract, strict liability, or tort (including negligence
# or otherwise) arising in any way out of the use of this software,
# even if advised of the possibility of such damage.
#
#   File: hello.pri
#
# Author: $author$
#   Date: 5/2/2017
########################################################################

hello_TARGET = veloce-hello

########################################################################
hello_INCLUDEPATH += \
$${veloce_INCLUDEPATH} \
$${rete_INCLUDEPATH} \
$${fila_INCLUDEPATH} \
$${crono_INCLUDEPATH} \
$${nadir_INCLUDEPATH} \

hello_DEFINES += \
$${framework_DEFINES} \
$${veloce_DEFINES} \

########################################################################
hello_HEADERS += \
$${CRONO_SRC}/crono/nadir/mt/os/mutex.hpp \
$${CRONO_SRC}/crono/nadir/mt/apple/osx/mutex.hpp \
$${CRONO_SRC}/crono/nadir/mt/posix/mutex.hpp \
$${CRONO_SRC}/crono/nadir/mt/mutex.hpp \
$${CRONO_SRC}/crono/nadir/mt/os/os.hpp \

hello_SOURCES += \
$${CRONO_SRC}/crono/nadir/mt/os/mutex.cpp \
$${CRONO_SRC}/crono/nadir/mt/os/os.cpp \

########################################################################
hello_HEADERS += \
$${CRONO_SRC}/crono/nadir/console/getopt/main.hpp \
$${CRONO_SRC}/crono/nadir/console/main_main.hpp \
$${CRONO_SRC}/crono/nadir/console/main.hpp \
$${CRONO_SRC}/crono/nadir/mt/logger.hpp \
$${CRONO_SRC}/crono/nadir/io/logger.hpp \
$${CRONO_SRC}/crono/nadir/io/logger_stdio.hpp \
$${CRONO_SRC}/crono/nadir/io/logger_message.hpp \
$${CRONO_SRC}/crono/nadir/io/logger_location.hpp \
$${CRONO_SRC}/crono/nadir/io/logger_level.hpp \
$${CRONO_SRC}/crono/nadir/base/base.hpp \

hello_SOURCES += \
$${CRONO_SRC}/crono/nadir/mt/logger.cpp \
$${CRONO_SRC}/crono/nadir/io/logger_stdio.cpp \
$${CRONO_SRC}/crono/nadir/io/logger_message.cpp \
$${CRONO_SRC}/crono/nadir/io/logger_location.cpp \
$${CRONO_SRC}/crono/nadir/io/logger_level.cpp \

########################################################################
hello_HEADERS += \
$${VELOCE_SRC}/veloce/nadir/app/console/hello/main.hpp \
$${VELOCE_SRC}/veloce/nadir/app/console/network/main.hpp \
$${VELOCE_SRC}/veloce/nadir/app/console/network/main_opt.hpp \
$${VELOCE_SRC}/veloce/nadir/console/getopt/main.hpp \
$${VELOCE_SRC}/veloce/nadir/console/getopt/main_opt.hpp \
$${VELOCE_SRC}/veloce/nadir/console/main.hpp \
$${VELOCE_SRC}/veloce/nadir/console/main_main.hpp \
$${VELOCE_SRC}/veloce/nadir/base/base.hpp \

hello_SOURCES += \
$${VELOCE_SRC}/veloce/nadir/app/console/hello/main.cpp \
$${VELOCE_SRC}/veloce/nadir/console/main_main.cpp \
$${VELOCE_SRC}/veloce/nadir/base/base.cpp \

########################################################################
hello_LIBS += \
$${nadir_LIBS} \

