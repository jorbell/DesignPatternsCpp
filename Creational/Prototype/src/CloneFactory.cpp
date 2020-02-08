#include "CloneFactory.hpp"
CloneFactory::CloneFactory(){
    m_orc= make_unique<Orc>(9,70, "Wraaaaar!");
    m_goblin= make_unique<Orc>(4,40, "Hihihihi");
}
unique_ptr<Monster> CloneFactory::createGoblin() 
{
    return m_goblin->clone();

}
unique_ptr<Monster> CloneFactory::createOrc() 
{
    return m_orc->clone();

}
