#                                                     -*-makefile-gmake-*-
#
# Makefile.inc.  Generated from Makefile.inc.in by configure. 
# on Sun Feb 20 19:38:43 CET 2022
#


# Directories
#############

prefix=/usr
exec_prefix=${prefix}

EMC2_HOME=/usr
LIB_DIR=/usr/lib

#used for install stuff
#but have them here as reference
#build system only uses EMC2_RTLIB_DIR when creating rtapi.conf
EMC2_BIN_DIR=/usr/bin
EMC2_TCL_DIR=/usr/lib/tcltk/linuxcnc
EMC2_HELP_DIR=/usr/share/doc/linuxcnc
EMC2_RTLIB_DIR=/usr/lib/linuxcnc/modules
EMC2_USER_CONFIG_DIR=~/emc2/configs
EMC2_SYSTEM_CONFIG_DIR=/usr/local/etc/emc2/configs
EMC2_NCFILES_DIR=/usr/share/linuxcnc/ncfiles
REALTIME=/usr/lib/linuxcnc/realtime
EMC2_IMAGEDIR=/usr/share/linuxcnc


MODULE_EXT=.so # module extension, used when insmod'ing

# used for building
RTDIR     = /home/moeller/Github/linuxcnc/src
RTARCH    = x86_64
ULAPI_CFLAGS = 
ULAPI_LDFLAGS = 

# Standard configure directories
# do we really need these?
bindir = ${exec_prefix}/bin
sbindir = ${exec_prefix}/sbin
libexecdir = ${exec_prefix}/libexec
datadir = ${datarootdir}
datarootdir = ${prefix}/share
sysconfdir = /etc
sharedstatedir = ${prefix}/com
localstatedir = ${prefix}/var
libdir = ${exec_prefix}/lib
infodir = ${datarootdir}/info
mandir = /usr/share/man
includedir = ${prefix}/include
moduledir = /usr/lib/linuxcnc/modules
rip_moduledir = 
kernelvers = 

# i18n variables:

package = linuxcnc
localedir = /usr/share/locale
LANGUAGES = 

#still needs discussion
# do we really need these?
docsdir = ${prefix}/share/doc/linuxcnc
sampleconfsdir = ${prefix}/share/doc/linuxcnc/examples/sample-configs
ncfilesdir = ${prefix}/share/linuxcnc/ncfiles
tcldir = ${prefix}/lib/tcltk/linuxcnc


# /Standard configure directories

RUN_IN_PLACE = no
RTPREFIX = uspace
RTAI = 
RTFLAGS = -DUSPACE 
KERNELDIR = 
RTFLAGS := -I. -I/home/moeller/Github/linuxcnc/src/include $(RTFLAGS) -DRTAPI -D_GNU_SOURCE -Drealtime
ULFLAGS = -Wall -g -I. -I/home/moeller/Github/linuxcnc/src/include -DULAPI -D_GNU_SOURCE -Os -DLOCALE_DIR=\"$(localedir)\" -DPACKAGE=\"$(package)\"
MODULE_EXT = .so
BUILD_SYS = uspace
CC = gcc
MANDB = /usr/bin/mandb
HIDRAW_H_USABLE = yes
TOOL_NML = no

# readline support for halcmd
READLINE_LIBS =  -lreadline

# flags for libudev
LIBUDEV_CFLAGS = 
LIBUDEV_LIBS = -ludev

# flags for glib
GLIB_CFLAGS = -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include
GLIB_LIBS = -lglib-2.0

# local flags for GTK3 include
GTK_VERSION = 3.24.31
GTK_CFLAGS = -pthread -I/usr/include/gtk-3.0 -I/usr/include/at-spi2-atk/2.0 -I/usr/include/at-spi-2.0 -I/usr/include/dbus-1.0 -I/usr/lib/x86_64-linux-gnu/dbus-1.0/include -I/usr/include/gtk-3.0 -I/usr/include/gio-unix-2.0 -I/usr/include/cairo -I/usr/include/pango-1.0 -I/usr/include/harfbuzz -I/usr/include/pango-1.0 -I/usr/include/fribidi -I/usr/include/harfbuzz -I/usr/include/atk-1.0 -I/usr/include/cairo -I/usr/include/pixman-1 -I/usr/include/uuid -I/usr/include/freetype2 -I/usr/include/libpng16 -I/usr/include/gdk-pixbuf-2.0 -I/usr/include/libpng16 -I/usr/include/x86_64-linux-gnu -I/usr/include/libmount -I/usr/include/blkid -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include
GTK_LIBS = -lgtk-3 -lgdk-3 -lpangocairo-1.0 -lpango-1.0 -lharfbuzz -latk-1.0 -lcairo-gobject -lcairo -lgdk_pixbuf-2.0 -lgio-2.0 -lgobject-2.0 -lglib-2.0

# local flags for GTK2 include
GTK2_VERSION = 2.24.33
GTK2_CFLAGS = -pthread -I/usr/include/gtk-2.0 -I/usr/lib/x86_64-linux-gnu/gtk-2.0/include -I/usr/include/pango-1.0 -I/usr/include/atk-1.0 -I/usr/include/gdk-pixbuf-2.0 -I/usr/include/libpng16 -I/usr/include/x86_64-linux-gnu -I/usr/include/pango-1.0 -I/usr/include/harfbuzz -I/usr/include/pango-1.0 -I/usr/include/libmount -I/usr/include/blkid -I/usr/include/fribidi -I/usr/include/cairo -I/usr/include/pixman-1 -I/usr/include/harfbuzz -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include -I/usr/include/uuid -I/usr/include/freetype2 -I/usr/include/libpng16
GTK2_LIBS = -lgtk-x11-2.0 -lgdk-x11-2.0 -lpangocairo-1.0 -latk-1.0 -lcairo -lgdk_pixbuf-2.0 -lgio-2.0 -lpangoft2-1.0 -lpango-1.0 -lgobject-2.0 -lglib-2.0 -lharfbuzz -lfontconfig -lfreetype
HAVE_GNOMEPRINT = 

# tcl tk cflags, includes and libs
TCL_DBGX=
TK_DBGX=
TCL_CFLAGS=-I/usr/include/tcl8.6 -DUSE_TCL_STUBS -I/usr/include/tcl8.6 
TCL_LIBS=-L/usr/lib/x86_64-linux-gnu -ltclstub8.6 -lX11 -lXss -lXext -lXft -lfontconfig -lfreetype -lfontconfig  -lpthread -ldl -lz  -lpthread -lm -L/usr/lib/x86_64-linux-gnu -ltk8.6  -lXinerama -ltirpc 

AR = /usr/bin/ar
ARFLAGS = cr
CXX = g++
ifeq ($(BUILD_SYS),uspace)
CPPFLAGS = -Wdate-time -D_FORTIFY_SOURCE=2
CXXFLAGS = -g -O2 -ffile-prefix-map=/home/moeller/Github/linuxcnc=. -fstack-protector-strong -Wformat -Werror=format-security
CFLAGS = -g -O2 -ffile-prefix-map=/home/moeller/Github/linuxcnc=. -fstack-protector-strong -Wformat -Werror=format-security -I/usr/include/tirpc 
LDFLAGS = -Wl,-z,relro -Wl,-z,now
endif
RANLIB = ranlib
RANLIBFLAGS = 
MSGFMT = /usr/bin/msgfmt
XGETTEXT = /usr/bin/xgettext
LIBDL = -ldl 
YAPPS = /usr/bin/yapps2

BUILD_DOCS = yes
BUILD_DOCS_PDF = yes
BUILD_DOCS_HTML = no
PYTHON = /usr/bin/python3
TCLSH = /usr/bin/tclsh8.6
EMC2_TCL_LIB_DIR = /usr/lib/tcltk/linuxcnc
A2X_LATEX_ENCODING = 

HAVE_LIBMODBUS3   = yes
LIBMODBUS_LIBS    = -lmodbus
LIBMODBUS_CFLAGS  = -I/usr/include/modbus

HAVE_LIBUSB10   = yes
LIBUSB10_LIBS   = -lusb-1.0
LIBUSB10_CFLAGS = -I/usr/include/libusb-1.0

YAPPS = /usr/bin/yapps2


#
# i18n
#


#### BEGIN CONFIG ####

# To disable compilation of any particular module,
# edit the following lines replacing "m" with "n".
#
# In time, we may have some fancy dohicky to set
# these options at compile time.

# usually you need rtapi,
# so you probably don't want to change this
CONFIG_RTAPI=m

# rtapi examples
CONFIG_RTAPI_EXAMPLES_EXTINT=m
CONFIG_RTAPI_EXAMPLES_FIFO=m
CONFIG_RTAPI_EXAMPLES_SEM=m
CONFIG_RTAPI_EXAMPLES_SHMEM=m
CONFIG_RTAPI_EXAMPLES_TIMER=m

# emc motion module
CONFIG_MOTMOD=m

# HAL components
CONFIG_BLOCKS=m
CONFIG_BOSS_PLC=m
CONFIG_DEBOUNCE=m
CONFIG_ENCODER=m
CONFIG_COUNTER=m
CONFIG_ENCODER_RATIO=m
CONFIG_STEPGEN=m
CONFIG_LCD=m
CONFIG_MUX_GENERIC=m
CONFIG_MATRIX_KB=m
CONFIG_FREQGEN=m
CONFIG_PWMGEN=m
CONFIG_SIGGEN=m
CONFIG_AT_PID=m
CONFIG_PID=m
CONFIG_SUPPLY=m
CONFIG_CLASSICLADDER_RT=m
CONFIG_TIMEDELAY=m
CONFIG_SIM_ENCODER=m
CONFIG_WEIGHTED_SUM=m
CONFIG_WATCHDOG=m
CONFIG_MODMATH=m
CONFIG_TON=m
CONFIG_TOFF=m
CONFIG_TP=m
CONFIG_STREAMER=m
CONFIG_SAMPLER=m

# HAL drivers
CONFIG_UPARPORT=m
CONFIG_HAL_PARPORT=m
CONFIG_PROBE_PARPORT=m
CONFIG_HAL_TIRO=m
CONFIG_HAL_EVOREG=m
CONFIG_HAL_MOTENC=m
CONFIG_HAL_SKELETON=m
CONFIG_HAL_SPEAKER=m
CONFIG_HAL_STG=m
CONFIG_HAL_VTI=m
CONFIG_HAL_AX521H=m
CONFIG_HAL_PPMC=m
CONFIG_PCI_8255=m
CONFIG_HOSTMOT2=m
CONFIG_OPTO_AC5=m
CONFIG_HAL_GM=m
CONFIG_HAL_BB_GPIO=m
CONFIG_HAL_PI_GPIO=m

CONFIG_USPACE_RTAI=n
RTAI_LXRT_CFLAGS=
RTAI_LXRT_LDFLAGS=

CONFIG_USPACE_XENOMAI=n
XENOMAI_CFLAGS=
XENOMAI_LDFLAGS=

LIBTIRPC_CFLAGS=-I/usr/include/tirpc
LIBTIRPC_LIBS=-ltirpc
PYTHON_CPPFLAGS=-I/usr/include/python3.9
PYTHON_EXTRA_LIBS=-lcrypt -lpthread -ldl  -lutil -lm -lm
PYTHON_EXTRA_LDFLAGS=-Xlinker -export-dynamic -Wl,-O1 -Wl,-Bsymbolic-functions
PYTHON_LIBS=-lcrypt -lpthread -ldl  -lutil -lm -lm
BOOST_PYTHON_LIB=-lboost_python39
PYTHON_CPPFLAGS=-I/usr/include/python3.9
PYTHON_LIBS=-L/usr/lib/x86_64-linux-gnu -lpython3.9
SITEPY=/usr/lib/python3/dist-packages
YAPPS=/usr/bin/yapps2
#### END CONFIG ####

