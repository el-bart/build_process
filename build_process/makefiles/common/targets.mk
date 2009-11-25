# makro for common calls
define run-in-gen
	@echo
	@echo "##### build $(COMPONENT_NAME) in $@_$(TC)_$(MEM_CHECK)"
	# make gen/ dir structure for source files
	GEN_NOW="$(GEN_BASE_DIR)/$@_$(TC)_$(MEM_CHECK)/`basename $(CURDIR)`" && \
		mkdir -p "$$GEN_NOW" && cd "$$GEN_NOW" && \
		mkdir -p $(SOURCE_DIRS)
	# make includes/ dir structure for global (public) include files
	$(SCRIPTS_BASE_DIR)/link_public_headers "$(GEN_INCLUDES_DIR)"
	# make gen dir
	mkdir -p "$(GEN_LIBS_DIR)"
	# run
	+$(MAKE) $(MFLAGS) -C "$(GEN_BASE_DIR)/$@_$(TC)_$(MEM_CHECK)/`basename $(CURDIR)`" \
		-f "$(CURDIR)/Makefile" TARGET=$@ $(TARGET) \
		STRIP_BINARY=$(STRIP_BINARY) \
		DEP_LIBS_WC="$(DEP_LIBS_WC)" \
		END_LINK_LIBS="$(END_LINK_LIBS)"
endef

# inside lib/app we can include any header (not only public ones)
CXXFLAGS+=-I$(CURDIR)
CFLAGS  +=-I$(CURDIR)

# external variables are passed by upper make

# this should not happen
.PHONY: all
all:
	@echo
	@echo 'error - no correct PROFILE has been specified'
	@echo
	@exit 1

# memory debugging is on?
ifneq (,$(MEM_DEBUG))
END_LINK_LIBS+=-lefence
endif

# include toolchain-specific flags
include $(MAKEFILES_TOOLCHAINS_BASE_DIR)/$(TC)-flags.mk

# include profiles from extrnal files
include $(wildcard $(MAKEFILES_PROFILES_BASE_DIR)/*.mk)
