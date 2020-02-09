#ifndef SUBTRACT_H
#define SUBTRACT_H
#include "Chain.h"
class Subtract : public Chain{
    private:
        double number1;
        double number2;
    public:
        ~Subtract(){}
        void calculate(double number1, double number2, string calculation);

};
#endif
