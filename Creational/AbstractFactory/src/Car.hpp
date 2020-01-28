#ifndef CAR_H
#define CAR_H
#include "CarFactory/Parts/Engine.hpp"
#include "CarFactory/Parts/Base.hpp"
#include "CarFactory/Parts/Tires.hpp"
class Car
{
    public:
	void getCar();
        Engine *engine;
        Base *base;
        Tires *tires;
};
#endif
