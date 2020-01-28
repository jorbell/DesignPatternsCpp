#ifndef CARFACTORY_H
#define CARFACTORY_H
#include <iostream>
#include "Engine.hpp"
using namespace std;
class CarFactory
{
    public:
        virtual Engine* CreateEngine() = 0;
        string CreateCar();
};
#endif
