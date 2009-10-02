CC=avr-gcc
CXX=avr-g++
AR=avr-ar
RANLIB=avr-ranlib
LD=avr-ld
STRIP=avr-strip
DOXYGEN=doxygen


# compiler flags
OPT_FLAGS:=-O3 -DNDEBUG -Werror
DBG_FLAGS:=-g3
PRF_FLAGS:=$(DBG_FLAGS) $(OPT_FLAGS) -pg

# linker flags
PRF_LDFLAGS:=-pg
DBG_LDFLAGS:=
OPT_LDFLAGS:=

