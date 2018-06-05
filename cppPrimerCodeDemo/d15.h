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
    virtual double net_price(std::size_t n) const { return n; }
    virtual void xcd() const {}
    virtual ~Quote()=default;
private:
    std::string bookNo;
protected:
    double price = 0.0;
};

class Bulk_quote : public Quote
{
public:
    Bulk_quote() = default;
    Bulk_quote(const std::string&, double, std::size_t, double){}
    double net_price(std::size_t n) const override {return n;}
    //void xcd() const override;
    ~Bulk_quote(){}
};

//double print_total(const Quote &item, size_t n)
//{
//    double ret = item.net_price(n);
//    std::cout << item.isbn() << " " << ret;
//    return ret;
//}

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
#endif // D15_H
