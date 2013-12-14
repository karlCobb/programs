#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
typedef uint64_t bigNum;

bool isPrime(bigNum);

int main(){
bigNum starting_number = 600851475143;
bool prime = isPrime(starting_number);
if(prime){
cout << "The number is prime cannot be factored further." << endl;
return 0;
}
else{
bigNum test_number = starting_number;
for(int i = 2; i < starting_number; ++i)
{
if(isPrime(test_number)){
cout << "The largest prime factor is " << test_number <<  endl;
return 0;
}
else if(isPrime(i)){
while(test_number%i == 0){
test_number = test_number/i;
}
}// end elseif
}//end for
}//end else

}

bool isPrime( bigNum number){


    if(number < 2) return false;
    if(number == 2) return true;
    if(number % 2 == 0) return false;
    for(int i=3; (i*i)<=number; i+=2){
        if(number % i == 0 ) return false;
    }
    return true;

}
