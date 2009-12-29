#ifndef INCLUDE_LIB1_REG_HPP_FILE
#define INCLUDE_LIB1_REG_HPP_FILE

/* public header */

#include <vector>

namespace Lib1
{

/** \brief test element to register in.
 *
 * this class is used to present force-link feature (element
 * to register in).
 *
 */
struct Reg
{
  /** \brief helper typedef. */
  typedef std::vector<const char*> StrVec;
  /** \brief static method - basic Mayer's singleton.
   *  \return reference to internal, static object.
   */
  static StrVec &get(void);
};

} // namespace Lib1

#endif
