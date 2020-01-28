#ifndef CAR_H
#define CAR_H
#include "Engine.hpp"
#include "Base.hpp"
#include "Tires.hpp"
class Car
{
    public:
	void getCar();
        Engine *engine;
        Base *base;
        Tires *tires;
};
#endif
