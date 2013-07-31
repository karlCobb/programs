#include <iostream>
using namespace std;
/*
*finds the second to highest and highest values of an array
*/

void max(int max1, int max2, int a[], int n);

int main()
{

int* a = new int[1000];
int max1 = 0;
int max2 = 0;
int n = 0;
cout << "Please enter the number of items you have(at least 2 values)\n>> ";
cin >> n;

if(n>1){
cout << "\nNow enter those items\n";
for(int i = 0; i < n; ++i)
{
cout << "item #" << i+1  << ": ";
cin >> a[i];
}
//set the greater value to max1
if(a[0] > a[1])
{max1 = a[0];
 max2 = a[1];}
else{
max2 = a[0];
max1 = a[1];
}
max(max1, max2, a, n);
}else{
cout << "Please enter at least two values.\n";
}
}



void max(int max1, int max2, int a[], int n)
{
for(int i = 2; i<n; ++i){
if (a[i]>max1)
{max2 = max1;
max1 = a[i];}
else if(a[i] > max2){
max2 = a[i];
}
}
	cout << "max is: " << max1 << "\nThe second largest number is: " << max2 << endl;
	
	}
