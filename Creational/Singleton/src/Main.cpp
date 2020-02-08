#include<iostream>
#include "Singleton.hpp"
#include "User.hpp"
using namespace std;
int main(int argc, const char *argv[])
{
    User *john = new User("john");
    User *jane = new User("jane");
    User *doe = new User("doe");
    
   Singleton *x = Singleton::getInstance(); 
   Singleton *y = Singleton::getInstance(); 
   Singleton *z = Singleton::getInstance(); 

   x->currentUser = *jane;

   cout << x->currentUser.getName() << endl;
   cout << y->currentUser.getName() << endl;
   cout << z->currentUser.getName() << endl;

   y->currentUser = *doe;

   cout << x->currentUser.getName() << endl;
   cout << y->currentUser.getName() << endl;
   cout << z->currentUser.getName() << endl;

   z->currentUser = *john;

   cout << x->currentUser.getName() << endl;
   cout << y->currentUser.getName() << endl;
   cout << z->currentUser.getName() << endl;
   return 0;
}
