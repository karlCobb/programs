#include <iostream>
using namespace std;
/*
*shifts the columns and rows i spaces in an  NxN matrix
*currently set to a 5x5 matrix
*/

void move_dynamic_matrix(int[][5], int[][5]);
void transfer_matrix(int[][5], int[][5]);

//n is the number of columns and rows in matrix
int n = 5;
int base = 0;
int top = 0;

int main(){
int array[][5] = {{0,1,2,3,4}, {5,6,7,8,9}, {10,11,12,13,14}, {15,16,17,18,19}, {20,21,22,23,24}};
int new_array[][5] = {{0,0,0,0,0}, {0,0,0,0,0}, {0,0,0,0,0}, {0,0,0,0,0}, {0,0,0,0,0}};
int moves = 0;
top = n-1;
cout << "How many moves to shift array(a negative shifts to the left\n";
cout << "a positive shifts to the right)\n";
cout << ">>";
cin >> moves;

cout << "Original Matrix: " << endl;
for(int k = 0; k < n; ++k)
{        for(int m = 0; m < n; ++m)
{cout << array[k][m];
if(m == (n-1))
        cout << "\n";
else if(array[k][m] < 10)
        cout << " |";
else
        cout << "|";
}//end for loop m
}//end for loop k

//set how many to move if negative or positive
int n_squared = (n-1)*(n-1);
if(moves < 0)
{moves = n_squared + moves;}
else
{moves = moves%n_squared;}

//stop when top == bottom for odd and even sized matrices
while(top != n/2)
{
//rotate one position to the right
for(int i = 0; i < moves; ++i){
move_dynamic_matrix(new_array, array);
if(moves > 0)
{
transfer_matrix(new_array, array);
}

}
top--;
base++;
}
int half = n/2;
//if odd number matrix set middle number
if(n%2 != 0)
{new_array[half][half] = array[half][half];}


cout  << "Rotated Matrix: " << endl;

for(int k = 0; k < n; ++k)
{        for(int m = 0; m < n; ++m)
{cout << new_array[k][m];
if(m == (n-1))
        cout << "\n";
else if(new_array[k][m] < 10)
        cout << " |";
else
	cout << "|";
}//end for loop m
}//end for loop k


}//end main()


//rotate one move to the right
void move_dynamic_matrix(int new_array[][5], int array[][5])
{
for(int i = base, j = top; j > base; j--)
	new_array[i][j-1] = array[i][j];
for(int i = top, j = top; i > base; i--)
	new_array[i-1][j] = array[i][j];
for(int i = top, j = base; j < top; j++)
	new_array[i][j+1] = array[i][j];
for(int i = base, j = base; i < top; i++)
	new_array[i+1][j] = array[i][j];
}

//transfers last move to array
void transfer_matrix(int new_array[][5], int array[][5])
{
for(int i = base, j = top; j > base; j--)
        array[i][j] = new_array[i][j];
for(int i = top, j = top; i > base; i--)
        array[i][j] = new_array[i][j];
for(int i = top, j = base; j < top; j++)
        array[i][j] = new_array[i][j];
for(int i = base, j = base; i < top; i++)
        array[i][j] = new_array[i][j];
}
