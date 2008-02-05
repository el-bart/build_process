.PHONY: all
all:: mk_gen_link
all:: $(LIBRARY_NAME)

.PHONY: test
test:: mk_gen_link
test:: copy_testdata
test:: $(TEST_PROGRAM_NAME)

.PHONY: mtest
mtest:: mk_gen_link
mtest:: copy_testdata
mtest:: $(CXXBIN_MTEST) $(CBIN_MTEST)


$(TEST_PROGRAM_NAME):: $(CXXOBJS_TEST) $(COBJS_TEST) \
					  $(CXXOBJS_NOMAIN) $(COBJS_NOMAIN)
	@echo "LD    $@"
	$(CXX) $(CXXFLAGS) -o $@ $^ $(TEST_LINK_LIBS) $(LINK_LIBS)

$(LIBRARY_NAME):: $(CXXOBJS) $(COBJS)
	@echo "AR    $@"
	$(AR) -r $@ $^

.PHONY: mk_gen_link
mk_gen_link:
	ln -fs "$(CURDIR)/$(LIBRARY_NAME)" "$(GEN_LIBS_DIR)"

include $(MAKEFILES_COMMON_BASE_DIR)/gen_targets_common.mk

