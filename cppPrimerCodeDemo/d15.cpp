#include "d15.h"

double print_total(const Quote &item, size_t n)
{
    double ret = item.net_price(n);
    std::cout << item.isbn() << " " << ret;
    return ret;
}

void Derived::f(const Derived &der)
{
    Base::statmem();
    Derived::statmem();
    der.statmem();
    statmem();

    Quote q;
    print_total(q, 23);
    Bulk_quote b;
    print_total(b, 9);
}



//void Base::statmem()
//{
//    std::cout << "this is Base " << std::endl;
//}
