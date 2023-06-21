#pragma once
#include <iostream>
#include"properties.h"
using namespace std;

class node
{
public:
	properties data;
	node* next;


	node();
	node(properties value);


};


