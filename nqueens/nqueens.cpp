#include <iostream>
#include <vector>
#include "nqueens.h"
using namespace std;

Queen& Queen::operator=(const Queen& rhs){
	row = rhs.row;
	column = rhs.column;
return *this;
}
ostream& operator<<(ostream& os, const Queen queen){
os << "(" << queen.row << ", " << queen.column << ")" << endl;
return os;
}


int Queen::getRow(){
return this->row;

}
int Queen::getColumn(){
return this->column;

}
