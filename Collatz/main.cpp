#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

bool isOdd(int);
bool isEven(int);
void collatz(int, vector<int>&);

int main(){
vector<int> maxArray;
collatz(16, maxArray);
}


bool isOdd(int n){
if(n%2 != 0)
return true;
else
return false;
}
//two arrays check length at end and if bigger make first array bigger
//


void collatz(int n, vector<int>& maxArray){
if(n == 1){
maxArray.push_back(n);
for(vector<int>::const_iterator i = maxArray.begin(); i != maxArray.end(); i++)
cout << *i << "->";
}else if(isOdd(n)){
maxArray.push_back(n);
collatz(3*n+1, maxArray);
}else{
maxArray.push_back(n);
collatz(n/2, maxArray);
}
}
