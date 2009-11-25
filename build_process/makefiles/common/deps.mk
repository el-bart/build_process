# has C sources?
ifneq (,$(CDEPS))
-include $(CDEPS)
endif

# has C++ sources?
ifneq (,$(CXXDEPS))
-include $(CXXDEPS)
endif

# export public headers
public_headers: $(ALL_HEADERS)
	@echo "HDRUP $(COMPONENT_NAME)"
	@cd "$(THIS_SRC_BASE_DIR)" && "$(SCRIPTS_BASE_DIR)/link_public_headers" "$(GEN_INCLUDES_DIR)"
	@echo "$(ALL_HEADERS)" > public_headers
