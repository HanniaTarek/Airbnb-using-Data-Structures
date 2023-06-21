#pragma once
#include <iostream>
#include <vector>
using namespace std;
class properties
{
public:
	string name;
	struct dates {
		int startDate, endDate;
	};
	string city;
	int price;
	int id;
	properties();
	vector<dates> n;

	friend std::ostream& operator <<(std::ostream& os, const properties& c)
	{
		return (os << "place name = " << c.name << ",ID = " << c.id << ", city = " << c.city << ", price = " << c.price << endl);
	}
	void addinfo();

};

