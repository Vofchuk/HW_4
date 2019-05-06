#include "clock.h"


Clock::Clock(int h, int m, int s) {
	if (h < 0 || h > 23 || m < 0 || m > 59 || s < 0 || s > 59) {
		h = 00;
		m = 00;
		s = 00;
	}
	else {
		hour = h;
		minute = m;
		second = s;
	}
}


Clock::Clock(int s) : hour(00), minute(00), second(00) {
	*this += s;
}

Clock::Clock() : hour(00), minute(00), second(00) {}

void Clock::operator+=(int s) {
	if (second + s < 59) {
		second += s;
	}
	else
	{
		int restSeconds = (s + second) % 60, addMinutes = (s + second) / 60;
		second = (s + second) % 60;
		if (minute + addMinutes < 59) {
			minute += addMinutes;
		}
		else
		{
			minute = (addMinutes + minute) % 60;
			hour += (addMinutes + minute) / 60;
		}

	}
}

Clock& Clock::operator++() {
	*this += 1;
	return *this;
}

ostream& operator<<(ostream& os, const Clock cl) {
	os << cl.hour << ":" << cl.minute << ":" << cl.second;
	return os;
}

Clock& Clock::operator++(int a) {
	Clock temp = *this;
	*this += 1;
	return temp;
}

Clock::~Clock()
{
}
