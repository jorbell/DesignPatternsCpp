#include<iostream>
#include "CarFactory/CarFactory.hpp"
#include "CarFactory/SaabFactory/SaabFactory.hpp"
#include "CarFactory/VolvoFactory/VolvoFactory.hpp"
#include "Car.hpp"
using namespace std;
int main(int argc, const char *argv[])
{
    CarFactory *factory;
    factory = new SaabFactory();
    Car car;
    car.engine = factory->CreateEngine();
    car.base = factory->CreateBase();
    car.tires = factory->CreateTires();
    car.getCar();

    factory = new VolvoFactory();
    car.engine = factory->CreateEngine();
    car.base = factory->CreateBase();
    car.tires = factory->CreateTires();
    car.getCar();

    return 0;
}
