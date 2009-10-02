CC=gcc
CXX=g++
AR=ar
RANLIB=ranlib
LD=ld
STRIP=strip
DOXYGEN=doxygen


# compiler flags
OPT_FLAGS:=-O3 -DNDEBUG -Werror
DBG_FLAGS:=-g3 -rdynamic
PRF_FLAGS:=$(DBG_FLAGS) $(OPT_FLAGS) -pg

# linker flags
PRF_LDFLAGS:=-pg
DBG_LDFLAGS:=
OPT_LDFLAGS:=

