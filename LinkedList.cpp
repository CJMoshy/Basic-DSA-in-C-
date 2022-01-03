#pragma once
#include "Node.h"
#include <iostream>

struct LinkedList
{	
public:
	//constructor
	LinkedList() {
		head = new Node();
		headptr = nullptr;
	}

	//append a node
	void append(Node* n) {
		if (head->data == 0) {
			head = n;
			headptr = head;
		}
		else {
			n->next = headptr;
			headptr = n;
		}
	}

	//append an integer
	void append(int x) {
		if (head->data == 0) {
			head->data = x;
			headptr = head;
		}
		else {
			Node* tmp = new Node(x);
			tmp->next = headptr;
			headptr = tmp;
		}
	}

	//print the list
	void print() {
		while (headptr != nullptr) {
			std::cout << '[' << headptr->data << ']' << " --> ";
			headptr = headptr->next;
		}
	 }


public:
	Node* head;
	Node* headptr;
};

