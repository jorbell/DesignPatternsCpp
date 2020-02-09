#ifndef DIVIDE_H
#define DIVIDE_H
#include "Chain.h"
class Divide : public Chain{
    private:
        double number1;
        double number2;
    public:
        ~Divide(){}
        void calculate(double number1, double number2, string calculation);

};
#endif
