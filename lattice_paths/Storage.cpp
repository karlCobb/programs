#include "Storage.h"
#include "Marker.h"
#include <iostream>
#include <cstdlib>
using namespace std;



bool Storage::push(Marker m){
top++;
//array[top] = m;
array[top].setRow(m.getRow());
array[top].setColumn(m.getColumn());
return true;
}

Marker Storage::pop(){
if(this->top >= 0){
Marker return_marker = array[top];
top--;
return return_marker;
}
//else
//return Marker(-1, -1);
}

Marker* Storage::getArray(){
return array;

}
