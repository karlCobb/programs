#ifndef CHECKPOSITIONS_H
#define CHECKPOSITIONS_H

#include <iostream>
#include <vector>
using namespace std;

bool diagonal(vector<Queen>&, int);
bool across(vector<Queen>&);
vector<Queen>::iterator orderByRow(vector<Queen>&, vector<Queen>&);

#endif
