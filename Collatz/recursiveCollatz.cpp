#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

bool isOdd(int);
bool isEven(int);
void collatz(int, vector<int>&);

int main(){
vector<int> maxArray;
vector<int> newArray;
int max_size = 0;

//send each number to collatz
for(int n = 1; n <= 100000; ++n){
collatz(n, maxArray);

//if larger than max_size store in newArray
if(max_size < maxArray.size()){
max_size = maxArray.size();
newArray.clear();
for(vector<int>::const_iterator i = maxArray.begin(); i != maxArray.end(); i++){
newArray.push_back(*i);
}
maxArray.clear();
}
else{
maxArray.clear();
}
}//end for
cout << max_size << endl;
for(vector<int>::const_iterator i = newArray.begin(); i != newArray.end(); i++){
cout << *i << " ";
}
}


bool isOdd(int n){
if(n%2 != 0)
return true;
else
return false;
}




void collatz(int n, vector<int>& maxArray){
maxArray.push_back(n);
if(n == 1){
return;
}else if(isOdd(n)){
collatz(3*n+1, maxArray);
}else{
collatz(n/2, maxArray);
}
}

