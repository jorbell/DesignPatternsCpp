#ifndef PIZZA_H
#define PIZZA_H
#include <iostream>
#include <memory>
using namespace std;
class Pizza
{
    public:
	void setDough(const string& dough);
        void setSauce(const string& sauce);
        void setTopping(const string& topping);
        void open() const;
    private:
        string m_dough;
        string m_sauce;
        string m_topping;

};
#endif
