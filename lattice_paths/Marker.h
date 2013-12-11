#ifndef MARKER_H
#define MARKER_H
#include <iostream>
#include <cstdlib>
using namespace std;


class Marker
{
public:
Marker(){row=0; column=0;}
Marker(int r, int c){row=r; column=c;}
Marker(const Marker& marker){
	row = marker.row;
	column = marker.column;
}
Marker& operator=(const Marker&);

bool moveUp();
bool moveDown();
bool moveRight();
bool moveLeft();
int getRow();
int getColumn();
void setRow(int);
void setColumn(int);


private:
int row;
int column;
};



#endif

