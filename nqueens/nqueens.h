#ifndef NQUEENS_H
#define NQUEENS_H

#include <iostream>
#include <vector>
using namespace std;

class Queen{
public:

Queen(){row=1; column=1;}
Queen(int r, int c){row = r; column = c;}
Queen(const Queen& queen){
	row = queen.row;
	column = queen.column;
}
Queen& operator=(const Queen&);
friend ostream& operator<<(ostream& os, const Queen queen);

int getRow();
int getColumn();

private:
int row;
int column;

};

#endif
