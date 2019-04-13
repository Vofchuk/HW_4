#pragma once
#include<iostream>
using namespace std;
struct IndexException {
	unsigned int index;
	unsigned int maxIndex;
	IndexException(int ind, int max) : index(ind), maxIndex(max) {}
};
