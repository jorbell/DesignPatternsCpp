#ifndef ENGINE_H
#define ENGINE_H
#include <iostream>
using namespace std;
class Engine
{
    public: 
        virtual string getEngine() = 0;
        virtual ~Engine() {};
};
#endif
