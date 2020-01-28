#include<iostream>
#include "CarFactory.hpp"
#include "SaabFactory.hpp"
#include "Car.hpp"
using namespace std;
int main(int argc, const char *argv[])
{
    CarFactory *factory;
    factory = new SaabFactory();
    Car saab;
    saab.engine = factory->CreateEngine();
    saab.base = factory->CreateBase();
    saab.tires = factory->CreateTires();
    saab.getCar();


    //cout << factory->CreateEngine()->getEngine() << endl;
    return 0;
}
