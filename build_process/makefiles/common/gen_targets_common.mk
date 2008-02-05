%.mt: %.mt.o $(CXXOBJS_NOMAIN) $(COBJS_NOMAIN)
	@echo "LD    $@"
	$(CXX) $(CXXFLAGS) -o $@ $^ $(TEST_LINK_LIBS) $(LINK_LIBS)

$(CBIN_MTEST)::
	@echo "mtest taget is not implemented for C sources"
	@false


.PHONY: copy_testdata
copy_testdata: testdata

testdata:
	if test -d "$(THIS_SRC_BASE_DIR)/features/testdata" ; \
	then \
	  echo "copying test data" ; \
	  cp -pur "$(THIS_SRC_BASE_DIR)/features/testdata" . ; \
	fi

