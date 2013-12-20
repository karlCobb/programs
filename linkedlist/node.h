#ifndef NODE_H
#define NODE_H
#include <cstdlib>
#include <iostream>
using namespace std;

class Node{
public:
int value;
Node* next;
Node(){next=NULL; value=0;}
Node(int v){next=NULL;value=v;}
~Node(){}
};


#endif
