#
# Nano Project Makefile
#
# this file is nano build, that compiles every source in a given directory,
# to a separate executable. all flags are added in-place, via config.mk file
# (optional). this makefile is available on BSD license. this is a part of
# "build_process" package:
# http://www.baszerr.eu, prjs -> build_process.
#

SRCS := $(wildcard *.cpp)
APPS := $(SRCS:.cpp=.out)
DEPS := $(SRCS:.cpp=.d)

CXXFLAGS := -Wall -std=c++1y

-include config.mk

# lave secondary targets in place
.SECONDARY:

.PHONY: all
all: $(APPS)

$(APPS): Makefile

%.out: %.cpp Makefile
	$(CXX) $(CXXFLAGS) -MD -o "$@" "$<"

Makefile: config.mk
	touch "$@"

config.mk:
	touch "$@"

-include $(DEPS)

.PHONY: clean
clean:
	rm -fv $(DEPS) $(APPS)
