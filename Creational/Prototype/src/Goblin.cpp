#include "Goblin.hpp"
#include <iostream>
Goblin::Goblin(int damage,int hp, string sound) : m_damage(damage), m_hp(hp),m_sound(sound)
{
   m_hp = 50 ;
}

void Goblin::makeSound(){
    std::cout <<"Goblin shouts: " << m_sound << std::endl;
}
void Goblin::takeDamage(int dmg){
    m_hp-=dmg;
    std::cout << "Goblin as "  << m_hp <<" hp left" << std::endl;
    
}
void Goblin::dealDamage(){
    std::cout << "Goblin deals "<< m_damage << " damage" << std::endl;
}
unique_ptr<Monster> Goblin::clone() 
{
    return make_unique<Goblin>(*this);
}

