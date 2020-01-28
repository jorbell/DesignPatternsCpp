#ifndef CARFACTORY_H
#define CARFACTORY_H
#include <iostream>
#include "Parts/Engine.hpp"
#include "Parts/Base.hpp"
#include "Parts/Tires.hpp"
using namespace std;
class CarFactory
{
    public:
        virtual Engine* CreateEngine() = 0;
        virtual Base* CreateBase() = 0;
        virtual Tires* CreateTires() = 0;
};
#endif
