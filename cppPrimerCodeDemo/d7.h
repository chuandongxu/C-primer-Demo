#ifndef D7_H
#define D7_H
#include <string>
#include <vector>
#include <iostream>

using std::string;
using std::istream;
using std::ostream;

class d7
{
public:
    d7();
private:
    damain();
};

class Sales_data
{
    friend Sales_data add(const Sales_data&, const Sales_data&);
    friend std::istream &read(std::istream &is, Sales_data &item);
    friend std::ostream &print(std::ostream &os, const Sales_data &item);

public:
    Sales_data(std::string s, unsigned cnt, double price):
        bookNo(s), units_sold(cnt), revenue(cnt*price){}

    Sales_data(): Sales_data("", 0, 0){}

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

private:
    string bookNo;
    unsigned units_sold = 0;
    double sellingprice = 0.0;
    double saleprice = 0.0;
    double discount = 0.0;
    double revenue;
};

istream &read(istream &is, Sales_data &item)
{
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}

ostream &print(ostream &os, const Sales_data &item)
{
//    os << item.isbn() << " " << item.units_sold << " "
//         << item.revenue << " " << item.avg_price();

    return os;
}

class Bar
{
  private:
    static Bar mem1;
    Bar *mem2;
    //Bar mem3;
};

class Screen
{
public:
    Screen &clear(char = bkground);
    void show(char = bkground)
    {
        std::cout << bkground;
    }
    void set()
    {
        //bkground = '8';
    }
private:
    static const char bkground;
    mutable size_t access_ctr;
};

class x
{
  class y *y1;
};

class y
{
    x x1;
};

class Window_mgr
{
public:
    using ScreenIndex = std::vector<Screen>::size_type;
    ScreenIndex addScreen(const Screen&);
    void clear(ScreenIndex);
private:
    std::vector<Screen> srceens = {Screen(/*24, 80, ''*/)};
};

#endif // D7_H
