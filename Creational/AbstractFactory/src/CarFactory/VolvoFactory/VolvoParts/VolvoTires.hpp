#ifndef VOLVOTIRES_H
#define VOLVOTIRES_H
#include "../../Parts/Tires.hpp"
class VolvoTires:public Tires
{
    public:
    	virtual string getTires();
        virtual ~VolvoTires() {};
};
#endif
