#
# NOTES
# -Qunused-arguments suppresses warning on unused compilation flags - should not bee needed in the future.
#

# compiler flags
CMN_FLAGS:=-Wall -Wextra -pipe -Qunused-arguments
OPT_FLAGS:=-O4 -DNDEBUG -Werror -march=native
DBG_FLAGS:=-g3
PRF_FLAGS:=-g $(OPT_FLAGS) -pg

# linker flags
CMN_LDFLAGS:=-rdynamic
DBG_LDFLAGS:=
OPT_LDFLAGS:=
PRF_LDFLAGS:=$(OPT_LDFLAGS) -pg
