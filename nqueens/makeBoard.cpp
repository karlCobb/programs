#include <iostream>
#include <vector>
#include <string>
#include "nqueens.h"
#include "makeBoard.h"
using namespace std;


string createRow(int pos, int N){
string row;
int before = pos-1;
int after = N-pos;
for(int i = 0; i < before; ++i){
row += "O ";
}
row += "X ";
for(int i = 0; i < after; ++i){
row += "O ";
}
return row;
}

vector<Queen>::iterator orderByRow(vector<Queen>& queens, vector<Queen>& orderedVec){
for(int i = 0; i < queens.size(); ++i){
        orderedVec[(queens.at(i).getRow()-1)] = queens.at(i);
}
vector<Queen>::iterator it = orderedVec.begin();
return it;
}


