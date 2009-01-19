# is any profile set?
PROFILES_LIST:=$(shell cd "$(MAKEFILES_PROFILES_BASE_DIR)" && ls | sed 's:\.mk::g' | xargs echo)

ifneq ($(PROFILE),$(findstring $(PROFILE),$(PROFILES_LIST)))
$(error PROFILE not set (aviable are: $(PROFILES_LIST)))
endif # PROFILE not set
