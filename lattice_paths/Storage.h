#ifndef STORAGE_H
#define STORAGE_H
#include <iostream>
#include <cstdlib>
#include "Marker.h"
using namespace std;

class Storage
{
public:
Marker* array;
Storage(){array = new Marker[9]; top = -1;}
Storage(int size){array = new Marker[size]; top = -1;}

bool push(Marker);
Marker pop();
Marker* getArray();

private:
int top;


};

#endif
