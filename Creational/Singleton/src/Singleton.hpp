#ifndef SINGLETON_H
#define SINGLETON_H
#include "User.hpp"
class Singleton
{
    public:
        static Singleton* getInstance();
        User currentUser=  *new User("seppo");
        void setCurrentUser(User user);
    private:
        Singleton();
        static Singleton* INSTANCE;

        
};
#endif
