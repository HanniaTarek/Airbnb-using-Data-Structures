#pragma once
#include "user.h"
using namespace std;
#include<iostream>
class Host :
    public user
{  
    public:
        Host(void);
        Host(string fullname, string email, string gender, string password, string nationality, int age);
};

