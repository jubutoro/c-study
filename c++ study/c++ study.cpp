#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
#include<iomanip>
#include<string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

class Point {
	int x, y;
public:
	Point() { x = 0; y = 0; }
	Point(int xx, int yy) { x = xx; y = yy; }
	operator int() { return x * y; } // Point형 객체가 int형으로 바뀌어야 하면 멤버변수 x와 y를 곱하여 바꾸세요
	// 리턴값은 원하는대로 변경가능..
};

int main()
{
	Point ob1(3, 5), ob2(4, 6);
	int i = ob1; //ob1이 i에 대입될 수 없으므로 int형 변환함수 호출
	cout << i << endl;
	cout << ob2 + 5 << endl; //마찬가지로 형변환 함수 호출

}



