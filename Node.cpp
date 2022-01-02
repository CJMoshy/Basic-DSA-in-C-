//created by CJ Moshy on 12/12/2021
#pragma once

struct Node {
  public:
  // no args
	Node() {
		this->data = 0;
		this->next = nullptr;
	}

  // args
	Node(int _data) {
		this->data = _data;
		this->next = nullptr;
	}
 public:
	int data;
	Node* next;
};
