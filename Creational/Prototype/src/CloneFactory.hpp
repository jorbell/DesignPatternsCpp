#ifndef CLONEFACTORY_H
#define CLONEFACTORY_H
#include <memory>
#include "Monster.hpp"
#include "Orc.hpp"
using namespace std;
class CloneFactory
{
    public:
	CloneFactory();
        unique_ptr<Monster>createOrc();
        unique_ptr<Monster>createGoblin();
    private:
        unique_ptr<Monster> m_orc;
        unique_ptr<Monster> m_goblin;


};
#endif
