#include <iostream>
#include <vector>
#include "nqueens.h"
#include "checkPositions.h"
using namespace std;
int N = 8;

int main(){
vector<Queen> queens;
int row = 1;
int col = 1;
while(queens.size()<N){
Queen new_q(row, col);
queens.push_back(new_q);

for(vector<Queen>::const_iterator it = queens.begin(); it != queens.end(); ++it)
cout << *it << endl;
cout << "-------------------------------------------------------------------" << endl;
cout << "diagonal : " << diagonal(queens, N) << endl;

if((diagonal(queens, N) && across(queens)) || (queens.size() == 1)){
++col;
row = 1;
}
else{
if(row < N){
Queen last_queen = queens.at(queens.size()-1);
row = last_queen.getRow()+1;
queens.pop_back();
}
else if(row == N){
Queen last_queen = queens.at(0);
row = last_queen.getRow()+1;
col = 1;
queens.clear();
}
if(row == N+1){
cout << "Impossible to solve with an " << N << "x" << N << " grid." << endl; 
return 0;
}
}//end else there was a hit
}//end while
for(vector<Queen>::const_iterator it = queens.begin(); it != queens.end(); ++it)
cout << *it << endl;
}
