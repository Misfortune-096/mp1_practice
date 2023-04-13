#pragma once

#include <iostream>

using namespace std;

class CTime {
private:
	int sec, min, hou;
public:
	CTime(void);
	CTime(int s, int m, int h);
	CTime(const CTime& an);
	CTime(const char* text);

	CTime Sum(const CTime& a1, const CTime& a2);
	CTime Dec(const CTime& a1, const CTime& a2);
	//CTime Cmp(const CTime& a1, const CTime& a2);
	char* aschar(const CTime& a);

	CTime operator+(const CTime& a);
	CTime operator-(const CTime& a);
	CTime operator+=(const CTime& a);
	CTime operator-=(const CTime& a);
	bool operator>(const CTime& a);
	bool operator>=(const CTime& a);
	bool operator<(const CTime& a);
	bool operator<=(const CTime& a);
	bool operator==(const CTime& a);
	bool operator!=(const CTime& a);
	/*
	ostream& operator<<(ostream&, const CTime&);
	istream& operator>>(istream&, CTime&);
	*/
	~CTime() {}
};
