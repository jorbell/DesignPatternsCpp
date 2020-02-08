#include "Orc.hpp"
#include <iostream>
Orc::Orc(int damage,int hp, string sound) : m_damage(damage), m_hp(hp),m_sound(sound)
{
   m_hp = 100 ;
}

void Orc::makeSound(){
    std::cout <<"Orc yells: " << m_sound << std::endl;
}
void Orc::takeDamage(int dmg){
    m_hp-=dmg;
    std::cout << "Orc has "<< m_hp <<" hp left" << std::endl;
    
}
void Orc::dealDamage(){
    std::cout << "Orc deals "<< m_damage << " damage" << std::endl;
}
unique_ptr<Monster> Orc::clone() 
{
    return make_unique<Orc>(*this);
}
