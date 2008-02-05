#ifndef FOO_HPP
#define FOO_HPP

/* public header */

class Foo
{
public:
    void resetTo(int v);
    unsigned int size(void) const;

    int a[3];
};

#endif

