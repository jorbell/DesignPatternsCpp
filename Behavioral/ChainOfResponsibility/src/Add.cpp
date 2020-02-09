#include "Add.h"
void Add::calculate(double number1, double number2, string calculation){
    if (calculation == "+"){
        std::cout << number1 << "+" << number2 << "=" << number1+number2 << std::endl;
    }else if(nextChain != NULL){
        nextChain->calculate(number1, number2, calculation);
    }

}
