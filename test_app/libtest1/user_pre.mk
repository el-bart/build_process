all::
	@echo "building LibTest1 for profile $(PROFILE)"

ifeq ($(PROFILE),release)
$(error libtest1 component is to be build for release mode (should be for tests-only!))
endif
