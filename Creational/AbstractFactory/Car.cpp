#include "Car.hpp"
void Car::getCar() 
{
    cout << "The car has " <<engine->getEngine() << 
        ", " <<base->getBase() << 
        " and " <<tires->getTires() << endl;


}
