#include <iostream>
#include <vector>
#include "nqueens.h"
#include "checkPositions.h"
using namespace std;

/*
Returns true if there is no hit
*/


bool diagonal(vector<Queen>& queens, int n)
{
int size = queens.size()-1;
Queen curr_queen = queens.at(size);
for(int i = 0; i < size; ++i){
  Queen other_queen = queens.at(i);
	for(int j = 1; j < n; ++j){
	  if((other_queen.getRow() == (curr_queen.getRow()-j)) && (other_queen.getColumn() == (curr_queen.getColumn()-j)))
	  return false;
	  if((other_queen.getRow() == (curr_queen.getRow()+j)) && (other_queen.getColumn() == (curr_queen.getColumn()+j)))
	  return false;
	  if((other_queen.getRow() == (curr_queen.getRow()-j)) && (other_queen.getColumn() == (curr_queen.getColumn()+j)))
	  return false;
	  if((other_queen.getRow() == (curr_queen.getRow()+j)) && (other_queen.getColumn() == (curr_queen.getColumn()-j)))
	  return false;
	}
}
return true;
}
/*
returns true if there is no hit
*/

bool across(vector<Queen>& queens){
int size = queens.size()-1;
Queen curr_queen = queens.at(size);
for(int i = 0; i < size; ++i){
  Queen other_queen = queens.at(i);
	if(other_queen.getRow() == curr_queen.getRow())
	return false;
}
return true;
}
