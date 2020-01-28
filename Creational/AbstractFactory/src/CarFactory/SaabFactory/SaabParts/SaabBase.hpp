#ifndef SAABBASE_H
#define SAABBASE_H
#include "../../Parts/Base.hpp"
class SaabBase: public Base
{
    public:
        virtual string getBase();
        virtual ~SaabBase() {};
};
#endif
