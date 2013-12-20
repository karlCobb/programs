#include <iostream>
#include <cstdlib>
#include "linkedList.h"
using namespace std;


//class LinkedList;

int main(){
LinkedList* list = new LinkedList;
LinkedList* saved_list;
list->traverse();
list->add(4);
list->add(3);
list->add(6);
list->add(3);
list->add(3);
list->add(2);
list->traverse();
saved_list = list;
cout << "------------------------" << endl;

list->deleteNode(3);
list->deleteNode(6);
list->deleteNode(2);
list->deleteNode(6);
saved_list->traverse();
cout << "------------------------" << endl;
list->traverse();
}
