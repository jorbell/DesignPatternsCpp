#include "Cook.hpp"
void Cook::openPizza() const
{
    m_pizzaBuilder->getPizza()->open();
}
void Cook::createPizza(PizzaBuilder* pizzaBuilder){
    m_pizzaBuilder = pizzaBuilder;
    m_pizzaBuilder->createNewPizza();
    m_pizzaBuilder->buildDough();
    m_pizzaBuilder->buildSauce();
    m_pizzaBuilder->buildTopping();
}
