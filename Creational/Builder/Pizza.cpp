#include "Pizza.hpp"
void Pizza::setDough(const string& dough) 
{
    m_dough = dough;
}
void Pizza::setSauce(const string& sauce) 
{
    m_sauce = sauce;
}
void Pizza::setTopping(const string& topping) 
{
    m_topping = topping;
}
void Pizza::open() const {
    cout<<"The pizza has "<< m_dough <<" dough "<<
        m_sauce<<" sauce, "<< 
        m_topping<<" topping."<< endl;

}
