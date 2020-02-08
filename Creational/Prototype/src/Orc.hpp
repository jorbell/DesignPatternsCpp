#ifndef ORC_H
#define ORC_H
#include "Monster.hpp"
class Orc: public Monster
{
    public:
        Orc(int damage, int hp,string sound);
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
