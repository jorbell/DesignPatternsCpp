#ifndef CARFACTORY_H
#define CARFACTORY_H
#include <iostream>
#include "Engine.hpp"
#include "Base.hpp"
#include "Tires.hpp"
using namespace std;
class CarFactory
{
    public:
        virtual Engine* CreateEngine() = 0;
        virtual Base* CreateBase() = 0;
        virtual Tires* CreateTires() = 0;
};
#endif
