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
cout << "hello" << endl;
//delete head;
head = new Node();

Node* p = linkedlist.head;
while(p->next != NULL){
add(p->value);
p = p->next;
}

}

void add(int);
void traverse();
void deleteNode(int);
Node* getHead();
int getCount();

private:
void deleteNodes();
Node* head;

};

#endif
