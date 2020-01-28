#ifndef SAABBASE_H
#define SAABBASE_H
#include "Base.hpp"
class SaabBase: public Base
{
    public:
        virtual string getBase();
        virtual ~SaabBase() {};
};
#endif
