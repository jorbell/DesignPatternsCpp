#ifndef MONSTERL_H
#define MONSTERL_H
#include <memory>
using namespace std;
class Monster
{
    public:
        virtual ~Monster() {} ;
        virtual unique_ptr<Monster> clone() = 0;
        virtual void makeSound() = 0;
        virtual void takeDamage(int dmg) = 0;
        virtual void dealDamage() = 0;
    private:
        int m_hp;
        int m_damage;
        string m_sound;
	
};
#endif
