#
# project specific configuration file
# to be placed in main project directory
#

# set default mode
export MODE=default

# set default profile
export PROFILE=test

# set default toolchain
export TC=avr

ifeq ($(TC),avr)
# choose uC type
FLAGS   := -mmcu=avr5
CFLAGS  +=$(FLAGS)
CXXFLAGS+=$(FLAGS)
endif
