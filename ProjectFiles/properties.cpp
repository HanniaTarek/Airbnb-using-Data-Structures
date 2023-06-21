#include "properties.h"
#include <unordered_map>
#include <string>

properties::properties()
{
	id = 0;
	name = " ";
	city = " ";
	price = 0;
}

void properties::addinfo()
{
	cout << "enter place name: " << endl;
	cin >> name;

	cout << "enter place id: " << endl;
	cin >> id;

	cout << "enter city: " << endl;
	cin >> city;

	cout << "enter price: " << endl;
	cin >> price;


}