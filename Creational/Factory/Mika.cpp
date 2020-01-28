#include <iostream>
#include "Mika.hpp"
#include "Car.hpp"
#include "Mclaren.hpp"

using namespace std;
void Mika::drive() 
{
    Car *car;
    car = new Mclaren();
    cout << "Mika drives with " <<  car->getCar()<< endl;
}
void Mika::comment()
{
    cout << "Mika comments: The weather could have been better" << endl;
}
