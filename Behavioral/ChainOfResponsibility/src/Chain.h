#ifndef CHAIN_H
#define CHAIN_H
#include <iostream>
using namespace std;
class Chain{
    protected:
        Chain *nextChain;
    public:
        Chain(){};
        virtual ~Chain(){}
        void setNextChain(Chain *nextChain);
        virtual void calculate(double number1, double number2, string calculation) = 0;
};
#endif
