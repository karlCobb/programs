#include <iostream>
#include <cmath>
#include "triGenerator.h"
using namespace std;

int main(){
uint64_t triNumber = 0;
vector<int> divisors;
int size = 0;
int ith = 0;
for(int i = 1; size < 500; ++i)
{
triNumber = generateTriangleNumbers(i);
size = findDivisors(triNumber);
cout << "Triangle Number: " << triNumber << " Size: " << size << endl;
ith = i;
}
findDivisors(triNumber, divisors);
cout << "The " << ith << "th triNumber: " << triNumber << " has " << size <<  " divisors" << endl;
cout << "Here are the divisors:" << endl;
for(vector<int>::const_iterator it = divisors.begin(); it != divisors.end(); ++it)
cout << *it << " ";

}
