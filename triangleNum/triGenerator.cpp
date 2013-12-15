#include <iostream>
#include <vector>
#include <cmath>
#include <cstdlib>
#include "triGenerator.h"

using namespace std;


/*
returns the triangle number at index n
*/

uint64_t generateTriangleNumbers(uint64_t triangleIndex)
{
return (triangleIndex*(triangleIndex+1))/2;
}

/*
finds divisors of a number
*/

void findDivisors(uint64_t number, vector<int>& divisors){
for(uint64_t i = 1; i <= number/2; ++i){
if(number%i == 0){
divisors.push_back(i);
}
}
divisors.push_back(number);
}

int findDivisors(uint64_t number){
uint64_t square_root = sqrt(number);
int count = 0;
if(number == 1){
return 1;
}
for(int i = 1; i <= square_root; ++i){
if(number%i == 0){
count += 2;
}
}
if(square_root*square_root == number){
count--;
}

return count;
}


