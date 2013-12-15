#include <iostream>
#include <cmath>
#include "triGenerator.h"
using namespace std;

int main(){
uint64_t triNumber = 0;
int size = 0;
for(int i = 1; size < 500; ++i)
{
triNumber = generateTriangleNumbers(i);
size = findDivisors(triNumber);
cout << "Triangle Number: " << triNumber << " Size: " << size << endl;
}
cout << triNumber << " has " << size << " divisors" << endl;


}
