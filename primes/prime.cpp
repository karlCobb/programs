#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
typedef uint64_t bigNum;

bool isPrime( bigNum possible_prime);

int main(){
bigNum starting_number;
//600851475143;
cin >> starting_number;
bool prime = isPrime(floor(starting_number));
if(prime){
cout << "The number is prime cannot be factored further." << endl;
return 0;
}
else{
bigNum test_number = starting_number;
cout << test_number << endl;
if(test_number%2 == 0){
--test_number;
}

do{
bool prime = isPrime(test_number);
if(prime && (starting_number%test_number == 0)){
cout << "The largest prime factor is " << test_number <<  endl;
return 0;
}
test_number -= 2;
}while(test_number > 1);
if(starting_number%2 == 0){
cout << "The largest prime factor is 2" << endl;
}
}
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
