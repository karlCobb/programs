#include "Marker.h"
#include <iostream>
#include <cstdlib>
using namespace std;

Marker& Marker::operator=(const Marker& rhs ){
	row = rhs.row;
	column = rhs.column;
return *this;
}

bool Marker::moveUp()
{
  this->row--;
  return 1;
}
bool Marker::moveDown()
{
  this->row++;
  return 1;
}
bool Marker::moveRight()
{
  this->column++;
  return 1;
}
bool Marker::moveLeft()
{
  this->column--;
  return 1;
}
int Marker::getRow(){
return this->row;
}
int Marker::getColumn(){
return this->column;
}
void Marker::setRow(int row){
this->row = row;
}
void Marker::setColumn(int column){
this->column = column;
}

