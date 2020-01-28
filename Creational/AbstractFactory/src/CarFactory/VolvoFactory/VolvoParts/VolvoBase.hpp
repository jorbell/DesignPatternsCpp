#ifndef VOLVOBASE_H
#define VOLVOBASE_H
#include "../../Parts/Base.hpp"
class VolvoBase: public Base
{
    public:
        virtual string getBase();
        virtual ~VolvoBase() {};
};
#endif
