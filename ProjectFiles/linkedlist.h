#pragma once
#include <iostream>
#include"node.h"

class linkedlist
{
public:
	node* head;
	node* tail;
	int size;


	linkedlist();
	void append(properties val);
	void display();
};



