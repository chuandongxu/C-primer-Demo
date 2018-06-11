#include <iostream>
#include "d3.h"
#include "d11.h"
#include "d15.h"
#include "test.h"

using namespace std;

double division(int a, int b)
{
    if( b == 0 )
    {
        throw "xcd";
    }

    return (a/b);
}

int main()
{
    //Bulk_quote *a = new Bulk_quote();
    //print_total(*a, 2);

    //    Quote q;
    //    print_total(q, 8);
    //    Derived d;
    //    d.f(d);

    //Disc_quote d;
    //foo_fo();
    //test d;
    //test d;
    //    Bulk_quote bulk;
    //    Bulk_quote *bulkP = &bulk;
    //    Quote *itemP = &bulk;
    //    bulkP->discount_policy();
    //itemP->

    //    jie15_6::Derived d(42);
    //    cout << d.get_mem() << endl;

    int x = 50;
    int y = 0;
    double z = 0;

    try {
        z = division(x, y);
        cout << "fdfdofjdi";
        cout << z << endl;
    }catch (const char* msg) {
        cerr << msg << endl;
    }
    cout << "mmmm";
    return 0;
}

