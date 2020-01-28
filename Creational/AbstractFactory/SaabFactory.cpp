#include "SaabFactory.hpp"
#include "SaabEngine.hpp"
#include "SaabBase.hpp"
#include "SaabTires.hpp"
Engine* SaabFactory::CreateEngine() 
{
    Engine *saabEngine;
    saabEngine = new SaabEngine();
    return saabEngine;

}
Base* SaabFactory::CreateBase()
{
    Base *saabBase;
    saabBase = new SaabBase();
    return saabBase;
}
Tires* SaabFactory::CreateTires()
{
    Tires *saabTires;
    saabTires = new SaabTires();
    return saabTires;
}
