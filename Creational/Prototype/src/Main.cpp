#include "Monster.hpp"
#include "Orc.hpp"
#include "Goblin.hpp"
#include "CloneFactory.hpp"
int main(int argc, const char *argv[])
{
    CloneFactory factory;
    auto orc1 = factory.createOrc();
    auto orc2 = factory.createOrc();
    auto goblin1 = factory.createGoblin();
    auto goblin2 = factory.createGoblin();

    orc1->takeDamage(3);
    orc2->takeDamage(10);
    goblin1->takeDamage(5);
    goblin2->takeDamage(30);
    orc1->dealDamage();
    orc2->dealDamage();
    goblin1->dealDamage();
    goblin2->dealDamage();
    orc1->makeSound();
    orc2->makeSound();
    goblin1->makeSound();
    goblin2->makeSound();


    return 0;
}
