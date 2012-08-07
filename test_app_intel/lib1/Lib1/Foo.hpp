#ifndef FOO_HPP
#define FOO_HPP

/* public header */

/** \brief Foo class description
 */
class Foo
{
public:
    /** \brief reset value do given.
     *  \param v value to reset to.
     */
    void resetTo(int v);
    /** \brief return size of a table
     *  \return size of tab
     */
    unsigned int size(void) const;

    /** \brief table of entries.  */
    int a[3];
};

#endif

