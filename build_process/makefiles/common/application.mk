.PHONY: all
all:: $(APPLICATION_NAME)

.PHONY: test
test:: copy_testdata
test:: $(TEST_PROGRAM_NAME)

.PHONY: mtest
mtest:: copy_testdata
mtest:: $(CXXBIN_MTEST) $(CBIN_MTEST)

$(TEST_PROGRAM_NAME):: $(CXXOBJS_TEST) $(COBJS_TEST) \
					  $(CXXOBJS_NOMAIN) $(COBJS_NOMAIN)
	@echo "LD    $@"
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LINK_LIBS)
	test -n "$(STRIP_BINARY)" && echo "STRIP $@" && $(STRIP) $@ ; true

$(APPLICATION_NAME):: $(CXXOBJS) $(COBJS)
	@echo "LD    $@"
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LINK_LIBS)
	test -n "$(STRIP_BINARY)" && echo "STRIP $@" && $(STRIP) $@ ; true

include $(MAKEFILES_COMMON_BASE_DIR)/gen_targets_common.mk

