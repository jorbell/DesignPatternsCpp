#ifndef USER_H
#define USER_H
#include <iostream>
using namespace std;
class User
{
    public:
        string name;
	User(string name);
        string getName();
        void setUsername(string name);
};
#endif
