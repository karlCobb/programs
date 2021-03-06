#include <iostream>
#include <vector>
#include "nqueens.h"
#include "checkPositions.h"
#include "makeBoard.h"
#include <string>

using namespace std;
int N = 11;

int main(){
vector<Queen> queens;

int count = 0;
int row = 1;
int col = 1;

while(queens.size()<N){


while(queens.size()<N){
Queen new_q(row, col);
queens.push_back(new_q);


if((diagonal(queens, N) && across(queens)) || (queens.size() == 1)){
++col;
row = 1;
}
else{
if(row <= N){
Queen last_queen = queens.at(queens.size()-1);
row = last_queen.getRow()+1;
}
while(row > N && queens.size() > 1){
queens.pop_back();
Queen last_queen = queens.at(queens.size()-1);
row = last_queen.getRow()+1;
col = last_queen.getColumn();
}
queens.pop_back();

if(row == N+1 && col == 1){

if(count > 0){
cout << "An " << N << "x" << N << " grid has " << count << " possible formations" << endl;
return 0;
}else{
cout << "Impossible to solve with a " << N << "x" << N << " grid." << endl; 
return 0;
}
}


}//end else there was a hit
}//end while
for(vector<Queen>::const_iterator it = queens.begin(); it != queens.end(); ++it)
cout << *it << endl;
cout << "_------------------------------" << endl;

vector<Queen> ordered;
ordered.reserve(queens.size());
vector<Queen>::iterator it = orderByRow(queens, ordered);
Queen q2;
for(int i = 0; i < N; ++i){
q2 = *(it+i);
cout << createRow(q2.getColumn(), N) << endl;
}

++count;
do{
Queen last_queen = queens.at(queens.size()-1);
queens.pop_back();
row = last_queen.getRow()+1;
col = last_queen.getColumn();
}while(row > N);
}

cout << "An " << N << "x" << N << " grid has " << count << " possible formations" << endl;
}
