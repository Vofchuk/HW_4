#include "Vector.h"

// Default constructor
Vector::Vector() : data(nullptr), capacity(10), size(0) {
	data = new int[capacity];
};

// Constructor
Vector::Vector(uint c) : data(nullptr), capacity(c), size(0) {
	data = new int[capacity];
};

// Copy constructor
Vector::Vector(const Vector& other) { 
	capacity = other.capacity;
	size = other.size;
	data = new int[other.size];
	for (int i = 0; i < other.size; i++)
	{
		data[i] = other.data[i];
	}
}

//cout
ostream& operator<<(ostream& o, const Vector& v) {
	o << "capacity: " << v.capacity << " size: " << v.size << " content: ";
	for (int i = 0; i < v.size; i++)
	{
		cout << v.data[i] << " ";
 	}
	return o;
}

//index[]
const int& Vector::operator[](uint index) const {
	if (index < 0 || index > this->size) throw IndexException(index, capacity);
	return this->data[index];
}

int& Vector::operator[](uint index) {
	if (index < 0 || index > this->capacity) throw IndexException(index, capacity);
	return data[index];
}

//operators
//+
Vector& Vector::operator+(const Vector other) const {
	Vector temp(capacity + other.capacity);
	return temp;
}

//*
int Vector::operator*(const Vector& other) const {
//	if (size != other.size) throw IndexException(size, capacity), IndexException(other.size, capacity);//TODO tem q ver see aqui as coisas vao rolar msm...
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += data[i] * other.data[i];
	}
	return sum;
}

//=
Vector& Vector::operator=(const Vector& other) {
	if (this == &other) return *this;
	capacity = other.capacity;
	size = other.size;
	delete[] data;//Pode ser q de problrma... ai tenho que colicar um if...
	data = new int[other.size];
	for (int i = 0; i < other.size; i++)
	{
		data[i] = other.data[i];
	}
	return *this;
}

//==
bool Vector::operator==(const Vector other) const {
	if (size != other.size) return false;
	bool flag = true;
	for (int i = 0; i < size; i++)
	{
		if (data[i] != other.data[i]) flag = false;
	}
	return flag;
}
\
//delete the last number in array
void Vector::delLast() {
	if (size == 0) throw 0;
	int* temp = new int[capacity];
	for (int i = 0; i < size - 1; i++)
	{
		temp[i] = data[i];
	}
	delete[] data;
	--size;
	data = temp;
}

void Vector::insert(int val) {
	if (size == capacity) throw capacity;
	data[++size - 1] = val;
}

//clear all object
void Vector::clear() {
	delete[] data;
	data = nullptr;
	capacity = 0;
	size = 0;
}

Vector::~Vector()
{
}

