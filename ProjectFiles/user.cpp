#include "user.h"
#include "User.h"

#include "Host.h"
using namespace std;

void user::login()
{
}

void user::signup()
{
    cout << "Fullname: ";
    cin >> fullname;
    cout << "Email: ";
    cin >> email;

    cout << "Password: ";
    cin >> password;

    cout << "Nationality: ";
    cin >> nationality;
    cout << "Gender: ";
    cin >> gender;
    cout << " Age: ";
    cin >> age;
}
