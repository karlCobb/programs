#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

int main()
{
vector<int> maxArray;
vector<int> newArray;
int max_size = 0;
int n = 2;
int collatz = n;
while(n <= 100000){
newArray.push_back(collatz);
if(collatz == 1){
n++;
if(newArray.size() > max_size){
maxArray.clear();
for(vector<int>::const_iterator i = newArray.begin(); i < newArray.end(); ++i){
maxArray.push_back(*i);
}
max_size = newArray.size();
}
newArray.clear();
collatz = n;
}
else if(collatz%2 == 0)
collatz = collatz/2;
else
collatz = 3*collatz+1;
}
for(vector<int>::const_iterator i = maxArray.begin(); i < maxArray.end(); ++i){
cout << *i << " "; 
}
cout << "\n" << max_size;
}


