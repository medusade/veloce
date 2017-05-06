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
#   File: veloce.pri
#
# Author: $author$
#   Date: 5/2/2017
########################################################################

########################################################################
# veloce
VELOCE_PKG = $${FRAMEWORK_PKG}/../veloce
VELOCE_PRJ = $${FRAMEWORK_PRO_DIR}$${VELOCE_PKG}
VELOCE_SRC = $${VELOCE_PRJ}/src
VELOCE_BLD = ../$${VELOCE_PKG}/build/$${FRAMEWORK_OS}/QtCreator/$${FRAMEWORK_CONFIG}
VELOCE_LIB = $${VELOCE_BLD}/lib

veloce_INCLUDEPATH += \
$${VELOCE_SRC} \
$${nadir_INCLUDEPATH} \

veloce_DEFINES += \

veloce_LIBS += \
-L$${VELOCE_LIB}/libveloce \
-lveloce \

