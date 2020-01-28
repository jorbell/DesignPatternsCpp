#ifndef VOLVOFACTORY_H
#define VOLVOFACTORY_H
#include "../CarFactory.hpp"
class VolvoFactory:public CarFactory
{
    public:
	Engine* CreateEngine();
        Base* CreateBase();
        Tires* CreateTires();
};
#endif
