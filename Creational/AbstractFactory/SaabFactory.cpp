#include "SaabFactory.hpp"
#include "SaabEngine.hpp"
Engine* SaabFactory::CreateEngine() 
{
    Engine *se;
    se = new SaabEngine();
    return se;

}
