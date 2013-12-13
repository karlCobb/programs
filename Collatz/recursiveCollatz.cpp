#include <iostream>
#include <cstdlib>
#include <vector>
#include <ctime>
using namespace std;
typedef uint64_t num;


bool isOdd(num);
bool isEven(num);
void collatz(num, vector<int>&);

int main(){
time_t start;
time_t end;
start = time(NULL);
vector<int> maxArray;
vector<int> newArray;
num max_size = 0;

//send each number to collatz
for(num n = 1; n <= 1000000; ++n){
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
end = time(NULL);
cout << difftime(end, start)*1000 << "ms" << endl;
}


bool isOdd(num n){
if(n%2 != 0)
return true;
else
return false;
}




void collatz(num n, vector<int>& maxArray){
maxArray.push_back(n);
if(n == 1){
return;
}else if(isOdd(n)){
collatz(3*n+1, maxArray);
}else{
collatz(n/2, maxArray);
}
}

