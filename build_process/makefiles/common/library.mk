.PHONY: all
all:: $(LIBRARY_NAME) public_headers.$(PROFILE)

include $(MAKEFILES_COMMON_BASE_DIR)/lib_app_common.mk
