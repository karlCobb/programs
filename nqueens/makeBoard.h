#ifndef MAKEBOARD_H
#define MAKEBOARD_H
#include "nqueens.h"
#include <string>

vector<Queen>::iterator orderByRow(vector<Queen>&, vector<Queen>&);
string createRow(int, int);

#endif
