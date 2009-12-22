# target's short name
.PHONY: ForceLink
ForceLink: $(GEN_INCLUDES_DIR)/BuildProcess/ForceLink.hpp

# rule to create it
$(GEN_INCLUDES_DIR)/BuildProcess/ForceLink.hpp:
	@echo "MKHPP BuildProcess/ForceLink.hpp"
	@mkdir -p "$(GEN_INCLUDES_DIR)/BuildProcess/"
	@echo '#ifndef INCLUDE_BUILDPROCESS_FORCELINK_HPP_FILE' >  "$@"
	@echo '#define INCLUDE_BUILDPROCESS_FORCELINK_HPP_FILE' >> "$@"
	@echo '#define FORCE_LINK_THIS_OBJECT(name) extern const bool FORCE_LINK_THIS_OBJECT__##name##__END=true;' >> "$@"
	@echo '#endif' >> "$@"
