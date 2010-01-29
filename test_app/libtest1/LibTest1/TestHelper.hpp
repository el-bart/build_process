/*
 * TestHelper.hpp
 *
 */
#ifndef INCLUDE_LIBTEST1_TESTHELPER_HPP_FILE
#define INCLUDE_LIBTEST1_TESTHELPER_HPP_FILE

/* public header */

// check for external flag set
#ifndef LIBTEST1_REQUIRED_MACRO
#error "required macro LIBTEST1_REQUIRED_MACRO is not set - something's wrong with the flags"
#endif


namespace LibTest1
{

/** \brief some test helper.
 */
struct TestHelper
{
  /** \brief compute the answer.
   *  \return answer itself.
   */
  int getAnswer(void);
}; // struct TestHelper

} // namespace LibTest1

#endif
