#include<iostream>
#include "Driver.hpp"
#include "Kimi.hpp"
#include "Mika.hpp"
using namespace std;

int main()
{
    //Driver is the factory
    //Kimi and Mika are the products of the factory
    Driver *kimi;
    kimi = new Kimi();
    kimi->drive();
    kimi->comment();

    Driver *mika;
    mika = new Mika();
    mika->drive();
    mika->comment();



    return 0;
}
