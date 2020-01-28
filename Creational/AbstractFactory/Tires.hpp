#ifndef TIRES_H
#define TIRES_H
#include <iostream>
using namespace std;
class Tires
{
    public:
    	virtual string getTires() = 0;
        virtual ~Tires() {};
};
#endif
