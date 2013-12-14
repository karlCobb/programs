#include <iostream>
#include "Prime.h"
#include <cmath>
using namespace std;

int main()
{
int product_nm = 0;
int count = 0;
int max = 0;
int saved_n = 0;
int saved_m = 0;
for(int n = 0; n < 1000; ++n){
	for(int m = 0; m < 1000; ++m){
		for(int i = 0; i <= 1000; ++i){
int prime_number = abs(((i*i)-(i*m))+n);
bool prime = isPrime(prime_number);
if(prime){
++count;
cout << count << ": " << prime_number << endl;
}
else{
if(count > max){
max = count;
cout << "current max " << max << endl;
product_nm = n*m;
saved_n = n;
saved_m = m;
}
count = 0;
i = 1001;
}//end else
}//end 3rd for

}//end 2nd for
}//end 1st for
cout << "The product of of the quadratic prime with the largest number of consecutive primes is " << product_nm << endl;
cout << "m: " << saved_m << " n: " << saved_n << endl;
}
