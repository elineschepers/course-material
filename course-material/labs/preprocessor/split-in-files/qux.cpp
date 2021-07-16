// In qux.cpp
#include "bar.h"
#include "foo.h"
void qux(bool b)
{
    foo(1);
    bar(5, 6);

    if (b)
        qux(false);
}
