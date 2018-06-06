#ifndef TEST_H
#define TEST_H
#include <iostream>
using namespace std;

class Foo
{
public:
    int val;
    Foo *pnext;
};

void foo_fo()
{
    Foo fo;
    if(fo.val || fo.pnext)
    {
        cout << fo.val << endl;
        cout << fo.pnext << endl;
    }
}

#endif // TEST_H
