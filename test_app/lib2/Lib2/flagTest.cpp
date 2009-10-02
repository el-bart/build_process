#ifndef SOME_LIB2_SPECIAL_FLAG
#error "flag SOME_LIB2_SPECIAL_FLAG not set - component dynamic dependencies are wrongly read"
#endif

#ifdef SOME_LIB2_SPECIAL_FLAG_FOR_TESTS_ONLY
#error "flag SOME_LIB2_SPECIAL_FLAG_FOR_TESTS_ONLY has been set outside of the tests"
#endif
