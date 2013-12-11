#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char* argv[])
{
int sum = 0;
int n = atoi(argv[1]);
for(int odd = 1; n >= 0; n--, odd+=2)
{
sum += odd * n;
}
cout << "sum: " << sum;
}
