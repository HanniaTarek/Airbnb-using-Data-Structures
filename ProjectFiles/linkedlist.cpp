#include "linkedlist.h"
#include "linkedlist.h"
#include"node.h"
#include<iostream>
#include<assert.h>
using namespace std;

linkedlist::linkedlist() {
	size = 0;
	head = tail = NULL;
}

void linkedlist::append(properties val)
{
	node* temp = new node(val);
	if (head == NULL) {
		head = tail = temp;
	}
	else {
		tail->next = temp;
		tail = tail->next;
	}
	size++;
}

void linkedlist::display()
{
	node* temp = head;
	while (temp != NULL) {
		cout << temp->data;
		cout << endl;
		temp = temp->next;

	}
}
