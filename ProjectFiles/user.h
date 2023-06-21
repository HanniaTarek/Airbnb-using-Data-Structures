#pragma once
using namespace std;
#include <iostream>
class user
{
public:
        string fullname;
        string email;
        string password;
        string nationality;
        string gender;
        int age;
    public:
        void login();
        void signup();
};

