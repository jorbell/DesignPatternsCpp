#ifndef VOLVOENGINE_H
#define VOLVOENGINE_H
#include "../../Parts/Engine.hpp"
class VolvoEngine: public Engine
{
    public:
	virtual string getEngine () ;
        virtual ~VolvoEngine() {};
};
#endif
