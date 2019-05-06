#pragma once
#include<iostream>
using namespace std;
struct IndexException {
	unsigned int size;
	unsigned int size2;
	unsigned int capacity;
	IndexException(int ind, int max) : size(ind), capacity(max) {}
	IndexException(int ind, int max, int max2) : size(ind), capacity(max), size2(max2) {}
};
