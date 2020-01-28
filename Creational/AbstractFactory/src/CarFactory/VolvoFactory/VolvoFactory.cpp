#include "VolvoFactory.hpp"
#include "VolvoParts/VolvoEngine.hpp"
#include "VolvoParts/VolvoBase.hpp"
#include "VolvoParts/VolvoTires.hpp"
Engine* VolvoFactory::CreateEngine() 
{
    Engine *volvoEngine;
    volvoEngine = new VolvoEngine();
    return volvoEngine;

}
Base* VolvoFactory::CreateBase()
{
    Base *volvoBase;
    volvoBase = new VolvoBase();
    return volvoBase;
}
Tires* VolvoFactory::CreateTires()
{
    Tires *volvoTires;
    volvoTires = new VolvoTires();
    return volvoTires;
}
