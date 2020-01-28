#ifndef BASE_H
#define BASE_H
#include <iostream>
using namespace std;
class Base
{
    public:
	virtual string getBase() = 0 ;
        virtual ~Base() {};
};
#endif
