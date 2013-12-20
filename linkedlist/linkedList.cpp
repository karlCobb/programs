#include <iostream> 
#include <cstdlib>
#include <cstdio>
#include <cstddef>
#include "linkedList.h"

using namespace std;


LinkedList& LinkedList::operator=(const LinkedList& ll){
	Node* p;
//        p = ll.head;
        LinkedList* new_list = new LinkedList;
        if(p->next != NULL){
          while(p->next != NULL){
	    int v = p->value;
            new_list->add(v); 
          }
        }
	return *new_list;
}

void LinkedList::add(int n){
Node* new_node;//new_node.value=n new_node->next=NULL
new_node = new Node(n);
if(head->next == NULL){
head->next = new_node;
}else{
Node* p;
p = head;
while(p->next){
p = p->next;
}
p->next = new_node;
}
}

void LinkedList::traverse(){
if(head->next == NULL){
cout << "Nothing in the list to traverse" << endl;
}else{
Node* p = head;

while(p->next)
{
p = p->next;
cout << p->value << endl;
}
}
}

void LinkedList::deleteNodes(){
if(head != NULL){
Node* p = head;
Node* temp;
while(p->next){
temp = p;
p = p->next;
delete temp;
}
head->next = NULL;
}


}

void LinkedList::deleteNode(int n){
if(head != NULL)
{
Node* p = head;
Node* last = p;
while(p->next != NULL || p->value == n){
if(p->value == n){
last->next = p->next;
delete p;

if(last->next != NULL){
p = last->next;
}
}
else{
last = p;
p = p->next;
}
}//end while

}//end if
else{
cout << "The list is empty" << endl;
}
}

