#ifndef COOK_H
#define COOK_H
#include "PizzaBuilder.hpp"
class Cook
{
    public:
	void openPizza() const;
        void createPizza(PizzaBuilder* pizzabuilder);
    private:
        PizzaBuilder* m_pizzaBuilder;
};
#endif
