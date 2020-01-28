#include "SaabFactory.hpp"
#include "SaabParts/SaabEngine.hpp"
#include "SaabParts/SaabBase.hpp"
#include "SaabParts/SaabTires.hpp"
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
