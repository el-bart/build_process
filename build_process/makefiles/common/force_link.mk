# target's short name
.PHONY: ForceLink
ForceLink: $(GEN_INCLUDES_DIR)/BuildProcess/ForceLink.hpp

# rule to create proper file
$(GEN_INCLUDES_DIR)/BuildProcess/ForceLink.hpp:
	@echo "MKHPP BuildProcess/ForceLink.hpp"
	@mkdir -p "$(GEN_INCLUDES_DIR)/BuildProcess/"
	@ln -s "$(CODE_BASE_DIR)/BuildProcess/ForceLink.hpp" "$@"
