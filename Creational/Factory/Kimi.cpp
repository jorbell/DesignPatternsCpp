#include <iostream>
#include "Kimi.hpp"
#include "Car.hpp"
#include "Ferrari.hpp"

using namespace std;
void Kimi::drive() 
{
    Car *car;
    car = new Ferrari();
    cout << "Kimi drives with " <<  car->getCar()<< endl;
}
void Kimi::comment()
{
    cout << "Kimi says: The race was good but tires were bad" << endl;
}
