#ifndef D7_H
#define D7_H
#include <string>
#include <iostream>
using std::string;

class d7
{
public:
    d7();
private:
    damain();
};

class Sales_data
{
private:
    string bookNo;
    unsigned units_sold = 0;
    double sellingprice = 0.0;
    double saleprice = 0.0;
    double discount = 0.0;
public:
    Sales_data()
    {
    }

    string isbn() const
    {
        return bookNo;
    }

    Sales_data& combine(const Sales_data &rhs)
    {
        units_sold += rhs.units_sold;

        saleprice = (rhs.saleprice * rhs.units_sold + saleprice * units_sold);

        if(sellingprice != 0)
            discount = saleprice / sellingprice;

        return *this;
    }
};

#endif // D7_H
