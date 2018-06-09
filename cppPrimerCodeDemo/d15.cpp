#include "d15.h"

//using namespace d15_4;

void d15_4::clobber(Sneaky &s)
{
    s.j = s.prot_mem = 0;
}

void d15_4::clobber(Base &b)
{
   //b.prot_mem = 0;
}

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

double Disc_quote::net_price(std::size_t) const
{

}

void jie15_5::clobber(jie15_5::Sneaky &s)
{
     s.j = s.prot_mem = 0;
}
