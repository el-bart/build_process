# include all required features
include $(MAKEFILES_COMMON_BASE_DIR)/force_link.mk
include $(MAKEFILES_COMMON_BASE_DIR)/version_check.mk

# force doing some extra stuff before building starts
.PHONY: pre_build
pre_build: ForceLink
pre_build: $(BUILD_PROCESS_VERSION_TIMESTAMP)
