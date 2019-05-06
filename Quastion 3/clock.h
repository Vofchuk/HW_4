#pragma once
#include<iostream>
#include"mytypes.h"
using namespace std;
class Clock
{
private:
	int hour;
	int minute;
	int second;
public:
	Clock();
	Clock(int s);
	Clock(int h, int m, int s);
	~Clock();

	void setHour(int h) { hour = h; };
	void setMinute(int m) { minute = m; };
	void setSecound(int s) { second = s; };
	int getHour() { return hour; };
	int getMinute() { return minute; };
	int getSecound() { return second; };

	friend ostream& operator<<(ostream& os, const Clock cl);
	Clock& operator++();
	Clock& operator++(int a);
	void operator+=(int s);
};

