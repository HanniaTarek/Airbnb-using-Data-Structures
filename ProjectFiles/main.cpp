#include <vector>
#include "Host.h"
#include"Traveler.h"
#include"user.h"
#include "Convertdate.h"
#include"linkedlist.h"
#include <list>
#include <string>
#include <iostream>
using namespace std;
    
static vector<Host> AllHosts;
static vector<Traveler> AllTravelers;
int main() {
    int choice;
    int login;
    bool isHost = false;
    Host hostobj;
    Traveler Travobj;

    linkedlist host;
    properties pObj;
    Convertdate dates;

    string date = "2019-10-16";
    cout << dates.dayOfYear(date) << endl;
    cout << "Do you want to log in or sign up?(1 to login 2 to signups)";
    cin >> login; //1 for signup 2 for log in//
{}
    if (login == 1) {
        cout << "Are you a host or travler??(enter 1 or 2)";
        cin >> choice;
        if (choice == 1) {
            isHost = true;
            hostobj.signup();
            AllHosts.push_back(hostobj);
            
        }
        else {
            Travobj.signup();
            AllTravelers.push_back(Travobj);
        }

    }
    else {
        //login function searches for username in array of users
    }
    char addPlace; //choice to add place
    if (isHost) {
        cout << "add place? (y/n)" << endl;
        cin >> addPlace;
        while (addPlace == 'y') {
            linkedlist host;
            properties pObj;
            pObj.addinfo();

            cout << "add anther place?" << endl;
            cin >> addPlace;
        }
    }
    
    
    return 0;
}