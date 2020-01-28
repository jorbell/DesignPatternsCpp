#ifndef SAABTIRES_H
#include "Tires.hpp"
#define SAABTIRES_H
class SaabTires:public Tires
{
    public:
    	virtual string getTires();
        virtual ~SaabTires() {};
};
#endif
