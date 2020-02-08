#include "Singleton.hpp"
Singleton* Singleton::INSTANCE = 0 ;
Singleton::Singleton(){
    currentUser = *new User("jane");

}
Singleton* Singleton::getInstance() 
{
    if (!INSTANCE) {
        INSTANCE = new Singleton;
    }
    return INSTANCE;
}

void Singleton::setCurrentUser(User user){
    currentUser = user;
}
