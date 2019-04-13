#pragma once
#include <iostream>
#include"mytypes.h"
#include"IndexException.h"


using namespace std;
class Vector
{
private:
	int* data;
	uint capacity;
	uint size;
public:
	Vector();// Default constructor
	Vector(uint);// Constructor
	Vector(const Vector& other);// Copy constructor

	uint getCapacity() { return capacity; };
	uint getSize() { return size; };
	void addSize() { ++size; };
	void clear();
	void delLast();
	void insert(int val);

	Vector& operator+(const Vector other) const;
	Vector& operator=(const Vector& other);
	bool operator==(const Vector other) const;
	const int& operator[](uint index) const; // test only
	int& operator[](uint index);            // with lvalue
	int operator*(const Vector& other) const;
	friend ostream& operator<<(ostream&, const Vector&);
	~Vector();
};

