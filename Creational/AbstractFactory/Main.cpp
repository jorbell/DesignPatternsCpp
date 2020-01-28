#include<iostream>
#include "CarFactory.hpp"
#include "SaabFactory.hpp"
using namespace std;
int main(int argc, const char *argv[])
{
    CarFactory *factory;
    factory = new SaabFactory();

    cout << factory->CreateEngine()->getEngine() << endl;
    return 0;
}
