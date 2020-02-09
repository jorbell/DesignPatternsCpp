#ifndef ADD_H
#define ADD_H
#include "Chain.h"
class Add : public Chain{
    private:
        double number1;
        double number2;
    public:
        ~Add(){}
        void calculate(double number1, double number2, string calculation);

};
#endif
