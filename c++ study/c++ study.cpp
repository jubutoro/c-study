#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
#include<iomanip>
#include<string>
using std::cout;
using std::cin;
using std::endl;
using std::string;



class Date {
	int day, month, year;
public:
	Date(const char* s) {
		sscanf(s, "%d%*c%d%*c%d%", &day, &month, &year);
	}
	Date(int y, int m, int d) { day = d; month = m; year = y; }
	void print() { cout << year << "³â " << month << "¿ù " << day << "ÀÏ\n"; }

};



int main(void)
{
	Date d1("11/5/2022");
	Date d2(2022, 5, 11);
	d1.print();
	d2.print();
}

