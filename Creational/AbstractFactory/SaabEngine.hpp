#ifndef SAABENGINE_H
#define SAABENGINE_H
#include "Engine.hpp"
class SaabEngine: public Engine
{
    public:
	virtual string getEngine () ;
        virtual ~SaabEngine() {};
};
#endif
