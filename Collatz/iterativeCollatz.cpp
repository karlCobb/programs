#include <iostream>
#include <cstdlib>
#include <vector>
#include <ctime>
using namespace std;
unsigned int ITERATIONS=1000000;
typedef uint64_t num;


int main()
{
time_t start;
time_t end;
start = time(NULL);
vector<int> maxArray;
vector<int> newArray;
int max_size = 0;
int n = 2;
unsigned int collatz = n;
while(n <= ITERATIONS){

try{
newArray.push_back(collatz);
}catch(exception& e){
cerr << e.what() << endl;
cerr << "size: " << newArray.size() << "\n";
cerr << "capacity: " << newArray.capacity() << "\n";
cerr << "collatz: " << collatz << endl;
}

if(collatz == 1){
++n;
if(newArray.size() > max_size){
maxArray.clear();
for(vector<int>::const_iterator i = newArray.begin(); i != newArray.end(); ++i){
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
for(vector<int>::const_iterator i = maxArray.begin(); i != maxArray.end(); ++i){
cout << *i << " "; 
}
cout << "\n" << max_size << endl;
end = time(NULL);
cout << difftime(end, start)*1000 << "ms" << endl;
}

