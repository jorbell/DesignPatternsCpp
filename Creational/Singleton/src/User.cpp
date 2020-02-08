#include "User.hpp"
User::User(string name){
    this->name = name;

}
void User::setUsername(string name) 
{
    this->name = name;

}
string User::getName()
{
    return this->name;
}
