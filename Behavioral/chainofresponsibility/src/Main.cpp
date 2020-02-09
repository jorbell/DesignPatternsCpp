#include <iostream>
#include "Divide.h"
#include "Add.h"
#include "Multiply.h"
#include "Chain.h"
#include "Subtract.h"
int main(){
    Chain *start = new Subtract();
    Chain *link2 = new Add();
    Chain *link3 = new Divide();
    Chain *link4 = new Multiply();

    start->setNextChain(link2);
    link2->setNextChain(link3);
    link3->setNextChain(link4);

    start->calculate(3.4, 532.43, "*");
    start->calculate(3.4, 532.43, "/");
    start->calculate(3.4, 532.43, "-");
    start->calculate(3.4, 532.43, "+");



    

    return 0;
}
