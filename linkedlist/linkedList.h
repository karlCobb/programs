#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstddef>
#include "node.h"
using namespace std;

class LinkedList{

public:

LinkedList& operator=(const LinkedList&);

LinkedList(){head = new Node; cout << "created";}
~LinkedList(){deleteNodes(); cout << "destroyed" << endl;}
LinkedList(const LinkedList& linkedlist){
	Node* p;
	p = head->next;
	LinkedList* new_list = new LinkedList;
	if(head->next != NULL){
	  while(p->next != NULL){
	    new_list->add(p->value); 
	  }
  	}
}

void add(int);
void traverse();
void deleteNode(int);


private:
void deleteNodes();
Node* head;

};

#endif
