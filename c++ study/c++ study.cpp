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
	operator int() { return x * y; } // Point�� ��ü�� int������ �ٲ��� �ϸ� ������� x�� y�� ���Ͽ� �ٲټ���
	// ���ϰ��� ���ϴ´�� ���氡��..
};

int main()
{
	Point ob1(3, 5), ob2(4, 6);
	int i = ob1; //ob1�� i�� ���Ե� �� �����Ƿ� int�� ��ȯ�Լ� ȣ��
	cout << i << endl;
	cout << ob2 + 5 << endl; //���������� ����ȯ �Լ� ȣ��

}



