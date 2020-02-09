#ifndef MULTIPLY_H
#define MULTIPLY_H
#include "Chain.h"
class Multiply : public Chain{
    private:
        double number1;
        double number2;
    public:
        ~Multiply(){}
        void calculate(double number1, double number2, string calculation);

};
#endif
