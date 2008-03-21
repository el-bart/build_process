#ifndef BB2_HPP
#define BB2_HPP

/* public header */

/** \brief BB2 class
 */
class BB2
{
public:
  /** \brief reset to int
   *  \param v value to set
   */
  void resetTo(int v);
  /** \brief return size
   *  \return size of tab
   */
  unsigned int size(void) const;

  /** \brief table of ints
   */
  int a[5];
};

#endif

