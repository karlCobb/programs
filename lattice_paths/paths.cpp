#include "Marker.h"
#include "Storage.h"
#include <cstdlib>
#include <iostream>
using namespace std;

int done = 0;
int MAX = 20;
int paths[21][21];
Marker m;
Storage storage;

int count = 0;
int top = 0;

void initialize();
void print();
int main()
{
initialize();

while(done <= 2){
if(m.getRow() == 0 && m.getColumn() == 0){
done++;
}
if(paths[m.getRow()][m.getColumn()] == 0){
Marker retrieved_marker = storage.pop();
//cout << "retrieved_marker_row: " << retrieved_marker.getRow() << endl;
//cout << "retrieved_marker_column: " << retrieved_marker.getColumn() << endl;

while(paths[retrieved_marker.getRow()][retrieved_marker.getColumn()] == 0){
paths[retrieved_marker.getRow()][retrieved_marker.getColumn()] = 2;
retrieved_marker = storage.pop();
}
if(retrieved_marker.getRow() != -1){
m.setRow(retrieved_marker.getRow());
m.setColumn(retrieved_marker.getColumn());
}
count++;

//cout << "Row: " << retrieved_marker.getRow() << "\ncolumn: " << m.getColumn() << endl;
//cout << "count: " << count << endl;
}
else if(paths[m.getRow()][m.getColumn()] == 1){
paths[m.getRow()][m.getColumn()]--;
storage.push(m);
m.moveDown();
//cout << "Row: " << m.getRow() << "\ncolumn: " << m.getColumn() << endl;
//cout << "paths: " << paths[m.getRow()][m.getColumn()] << endl;
}
else{
paths[m.getRow()][m.getColumn()]--;
storage.push(m);
m.moveRight();
//cout << "Row: " << m.getRow() << "\ncolumn: " << m.getColumn() << endl;
//cout << "paths: " << paths[m.getRow()][m.getColumn()] << endl;
}
cout << "count " << count << endl;

}//end while
}



void initialize(){
for(int i = 0; i <= MAX; i++){
	for(int j = 0; j <= MAX; j++){
	   if((j == MAX) || (i == MAX)){
	   paths[i][j] = 0;
	}
	   else{
	   paths[i][j] = 2;
	}
	}

}
}


void print(){
for(int i = 0; i <= MAX; i++){
	for(int j = 0; j <= MAX; j++){
	cout << paths[i][j] << " ";

}
cout << "\n";
}
}
