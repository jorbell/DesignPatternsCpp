#ifndef GOBLIN_H
#define GOBLIN_H
#include "Monster.hpp"
class Goblin: public Monster
{
    public:
        Goblin(int damage, int hp,string sound);
    	void makeSound();
        void takeDamage(int dmg);
        void dealDamage();
        unique_ptr<Monster> clone();
    private:
        int m_hp;
        int m_damage;
        string m_sound;
};
#endif
