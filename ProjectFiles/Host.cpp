#include "Host.h"
using namespace std;
#include <vector>
Host::Host(void)
{
}

Host::Host(string name, string Email, string Gender, string pass, string Nationality, int Age)
{
    fullname = name;
    Email = email;
    Gender = gender;
    pass = password;
    Nationality = nationality;
    Age = age;
}

/*oid Host:: Hsignup() {
    cout << "Fullname: ";
    cin >>fullname;
    cout << "Email: ";
    cin >>email;

   cout << "Password: ";
   cin >>password;

    cout << "Nationality: ";
  cin >> nationality;
   cout << "Gender: ";
   cin >> gender;
   cout << " Age: ";
   cin >> age;   
}*/
