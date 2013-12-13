#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;
typedef uint64_t num;
int ITERATIONS=1000000;

int main()
{
num counter = 0;
num max_size = 0;
num max_collatz = 0;
num n = 2;
num collatz = n;
while(n <= ITERATIONS){

if(collatz == 1){
if(counter > max_size){
max_collatz = n;
max_size = counter;
}
counter = 0;
collatz = ++n;
cout << "max_size: " << max_size << endl;
cout << "max_collatz: " << max_collatz << endl;
}
else if(collatz%2 == 0){
try{
collatz = collatz/2;
}catch(exception& e){
cerr << e.what() << endl;
}
}
else{
try{
collatz = 3*collatz+1;
}catch(exception& e){
cerr << e.what() << "\n";
}
}
++counter;
}
cout << "max_size: " << max_size << endl;
cout << "max_collatz: " << max_collatz << endl;

}

