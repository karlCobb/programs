#include <iostream> 
#include <cstdlib>
#include <cstdio>
#include <cstddef>
#include "linkedList.h"
#include <algorithm>

using namespace std;


LinkedList& LinkedList::operator=(const LinkedList& ll){
//delete head;
Node* p = ll.head;
while(p->next != NULL){
p=p->next;
add(p->value);
}
return *this;
}



Node* LinkedList::getHead(){
return head;
}

int LinkedList::getCount(){
int count = 0;
if(head != NULL){
Node* p = head;
while(p->next){
p = p->next;
++count;
}
}
return count;
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
delete head;
}
/*
Node* p = head;
Node* temp;

while(p->next != NULL){
temp = p->next;
p->value = temp->value;
p->next = temp->next;
cout << "temp : " << temp->value << endl;
delete temp;
}
if(head != NULL){
delete head;
}
}
*/
}

void LinkedList::deleteNode(int n){
if(head != NULL){
Node* p = head->next;
Node* temp;
Node* last = head;
while(p->next != NULL){
if(p->value == n){
last = p;
temp = p->next;
p->value = temp->value;
p->next = temp->next;
temp->next = NULL;
delete temp;
}
else{
last = p;
p = p->next;
}
}
p->next = NULL;
if(p->value == n)
{
last->next = NULL;
p->next = NULL;
delete p;
}

}
}
