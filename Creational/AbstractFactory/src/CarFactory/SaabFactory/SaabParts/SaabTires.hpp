#ifndef SAABTIRES_H
#include "../../Parts/Tires.hpp"
#define SAABTIRES_H
class SaabTires:public Tires
{
    public:
    	virtual string getTires();
        virtual ~SaabTires() {};
};
#endif
