#ifndef D15_H
#define D15_H
#include <string>
#include <iostream>

class Quote
{
public:
    Quote()=default;
    Quote(const std::string &book, double sales_price) : bookNo(book), price(sales_price) {}
    std::string isbn() const {return "xcd";}
    virtual double net_price(std::size_t n) const { std::cout << "Quote"; return n; }
    virtual void xcd() const {}
    virtual ~Quote()=default;
private:
    std::string bookNo;
protected:
    double price = 0.0;
};

class Disc_quote : public Quote
{
public:
    Disc_quote() = default;
    Disc_quote(const std::string &book, double price, std::size_t qty, double disc):
        Quote(book, price),
        quantity(qty), discount(disc) {}
    double net_price(std::size_t) const = 0;
protected:
    std::size_t quantity = 0;
    double discount = 0.0;
};

class Bulk_quote : public Disc_quote
{
public:
    Bulk_quote() = default;
    Bulk_quote(const std::string&, double, std::size_t, double){}
    double net_price(std::size_t n) const override {std::cout << "Bulk_quote"; return n;}
    ~Bulk_quote(){}
};



class A
{
public:
    A() = default;
    virtual ~A()=default;
    virtual void show() {std::cout << "this is A";}

private:
    int na;
};

class B : private A
{
public:
    B() = default;
    virtual void show() {std::cout << "this is B";}
};

class Base
{
public:
    static void statmem(){std::cout << "this is Base " << std::endl;}
};

class Derived : public Base
{
public:
    void f(const Derived&);
};

//15.5
class myBulk_quote : public Quote
{
public:
    double net_price(std::size_t cnt) const override
    {
        if( cnt >= min_qty )
            return cnt * (1 - discount) * price;
        else
            return cnt * price;
    }
private:
    size_t min_qty;
    double discount;
};

//15.7
class Limited_quote : public Quote
{
public:
    double net_price(std::size_t n) const override
    {

    }
};

namespace d15_4
{
//15.4节
class Base
{
protected:
    int prot_mem;
};

class Sneaky : public Base
{
    friend void clobber(Sneaky &);
    friend void clobber(Base &);
    int j;
};

//void clobber(Sneaky &s)
//{
//    s.j = s.prot_mem = 0;
//}

//void clobber(Base &b)
//{
//   // b.prot_mem = 0;
//}
}

#endif // D15_H
