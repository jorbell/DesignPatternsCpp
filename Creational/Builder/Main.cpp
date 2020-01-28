#include<iostream>
#include "Cook.hpp"
#include "HawaiianPizzaBuilder.hpp"
#include "SpicyPizzaBuilder.hpp"
using namespace std;
int main()
{
    //Creates cook
    Cook cook{};
    //Creates builder for hawaiian pizza)
    HawaiianPizzaBuilder hawaiian;
    //creates the pizza
    cook.createPizza(&hawaiian);
    cook.openPizza();

    //Creates builder for spicy pizza)
    SpicyPizzaBuilder spicy;
    //creates the pizza
    cook.createPizza(&spicy);
    cook.openPizza();


    return 0;
}
