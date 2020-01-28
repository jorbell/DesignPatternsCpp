#include "PizzaBuilder.hpp"
void PizzaBuilder::createNewPizza() 
{
    m_pizza = make_unique<Pizza>();

}
Pizza* PizzaBuilder::getPizza() {
    return m_pizza.release();
}
