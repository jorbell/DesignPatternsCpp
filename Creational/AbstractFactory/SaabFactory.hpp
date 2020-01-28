#ifndef SAABFACTORY_H
#define SAABFACTORY_H
#include "CarFactory.hpp"
class SaabFactory:public CarFactory
{
    public:
	Engine* CreateEngine();
};
#endif
