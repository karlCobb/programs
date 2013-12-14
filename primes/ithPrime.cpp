#include <iostream>
#include "Prime.h"
using namespace std;

int main()
{
int count = 0;
int n = 2;
uint64_t prime_num;
while(count <= 10001){
bool prime = isPrime(n);
if(prime){
prime_num = n;
++count;
++n;
}
else{
++n;
}
}
--count;
cout << "The " << count << "st prime is " << prime_num << endl;

}
