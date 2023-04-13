#include "M3.h"

CTime::CTime(void) {
	sec = 0, min = 0, hou = 0;
}
CTime::CTime(int s, int m, int h) {
	sec = s, min = m, hou = h;
}
CTime::CTime(const CTime& an) {
	sec = an.sec, min = an.min, hou = an.hou;
}
CTime::CTime(const char* text) {
	sec = int(text[7]) + 10 * int(text[6]);
	min = int(text[4]) + 10 * int(text[3]);
	hou = int(text[1]) + 10 * int(text[0]);
}

CTime CTime::Sum(const CTime& a1, const CTime& a2) {
	CTime res;
	res.hou = ((a1.sec + a2.sec) / 60 + a1.min + a2.min) / 60 + a1.hou + a2.hou;
	res.min = ((a1.sec + a2.sec) / 60 + a1.min + a2.min) % 60;
	res.sec = (a1.sec + a2.sec) % 60;
	return res;
};

CTime CTime::Dec(const CTime& a1, const CTime& a2) {
	CTime res;
	res.sec = (60 + a1.sec - a2.sec) % 60;
	res.min = (60 + a1.min - a2.min + (60 + a1.sec - a2.sec) / 60) % 60;
	res.hou = a1.hou - a2.hou + (60 + a1.min - a2.min + (60 + a1.sec - a2.sec) / 60) / 60;
	return res;
};

CTime CTime::operator+(const CTime& a1) {
	CTime res;
	res.hou = ((a1.sec + sec) / 60 + a1.min + min) / 60 + a1.hou + hou;
	res.min = ((a1.sec + sec) / 60 + a1.min + min) % 60;
	res.sec = (a1.sec + sec) % 60;
	return res;
}

CTime CTime::operator-(const CTime& a1) {
	CTime res;
	res.sec = (60 + sec - a1.sec) % 60;
	res.min = (60 + min - a1.min + (60 + sec - a1.sec) / 60) % 60;
	res.hou = hou - a1.hou + (60 + min - a1.min + (60 + sec - a1.sec) / 60) / 60;
	return res;
}

CTime CTime::operator+=(const CTime& a1) {
	hou = ((a1.sec + sec) / 60 + a1.min + min) / 60 + a1.hou + hou;
	min = ((a1.sec + sec) / 60 + a1.min + min) % 60;
	sec = (a1.sec + sec) % 60;
	return *this;
}

CTime CTime::operator-=(const CTime& a1) {
	sec = (60 + sec - a1.sec) % 60;
	min = (60 + min - a1.min + (60 + sec - a1.sec) / 60) % 60;
	hou = hou - a1.hou + (60 + min - a1.min + (60 + sec - a1.sec) / 60) / 60;
	return *this;
}
/*
bool operator>(const CTime& a1, const CTime& a2)
{
	return(a1.sec + 60 * a1.min + 3600 * a1.hou  > a2.sec + 60 * a2.min + 3600 * a2.hou);
}

bool operator>=(const CTime& a1, const CTime& a2)
{
	return(a1.sec + 60 * a1.min + 3600 * a1.hou >= a2.sec + 60 * a2.min + 3600 * a2.hou);
}

bool operator<(const CTime& a1, const CTime& a2)
{
	return(a1.sec + 60 * a1.min + 3600 * a1.hou < a2.sec + 60 * a2.min + 3600 * a2.hou);
}

bool operator<=(const CTime& a1, const CTime& a2)
{
	return(a1.sec + 60 * a1.min + 3600 * a1.hou <= a2.sec + 60 * a2.min + 3600 * a2.hou);
}

bool operator==(const CTime& a1, const CTime& a2)
{
	return(a1.sec + 60 * a1.min + 3600 * a1.hou == a2.sec + 60 * a2.min + 3600 * a2.hou);
}

bool operator!=(const CTime& a1, const CTime& a2)
{
	return(a1.sec + 60 * a1.min + 3600 * a1.hou != a2.sec + 60 * a2.min + 3600 * a2.hou);
}

ostream& operator<<(ostream& stream, const CTime&) {
	stream << hou << ":" << min << ":" << sec << endl;
	return stream;
}

*/

