#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
 using namespace std;

typedef struct pair{
	int priority;
	int myIndx; //my indexs in data
	string str;
	struct pair* other; // same item in other heap
}Pair;

bool  isNumber(const string& str);