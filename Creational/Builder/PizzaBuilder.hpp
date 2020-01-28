#ifndef PIZZABUILDER_H
#define PIZZABUILDER_H
#include "Pizza.hpp"
class PizzaBuilder
{
    public:
        virtual ~PizzaBuilder() = default;
	void createNewPizza();
        Pizza* getPizza();
        virtual void buildDough() = 0;
        virtual void buildSauce() = 0;
        virtual void buildTopping() = 0;
    protected:
        unique_ptr<Pizza> m_pizza;

};
#endif
