#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
#include<iomanip>
#include<string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

 //예시 1
class point {
	int x;
	int y;
public:
	point (int i, int j) { x = i; y = j; }
	int getx() { return x; }
	int gety() { return y; }
	void upprint() {
		++x; ++y;
		cout << x << " " << y << endl;
	}

	point up() { // 함수의 형식이 클래스 명이면 객체의 값을 리턴하는 것!
		++x;
		++y;
		return *this;
	}
};


int main() 
{
	point p1(3, 4);
	p1.upprint();
	p1.up();
	cout << p1.getx() << "..";
	cout << p1.gety();
}

	//예시2 [전치연산자]
point up() {
	++x;
	++y;
	return *this;
	
	//이 둘은 같은 효과.

	point poerator++() {//poerator++를 함수 이름으로 생각하면 이해가 쉽다.
		++x;
		++y;
		return *this;
	
	}
	main함수에 ++p1;하면 됨. (마치 ++i처럼 사용)


	//예시3 [후치연산자]
	point poerator--()(int) {//poerator++를 함수 이름으로 생각하면 이해가 쉽다. (int)가 뒤에 있으면 후치!
		--x;
		--y;
		return *this;

	}



	//예시4 이항연산자 곱셈, 뺄셈 다 가능
	class Point {
		int x;
		int y;
	public:
		Point(int i, int j) { x = i; y = j; }
		Point() { x = 0; y = 0; }
		int getX() { return x; }
		int getY() { return y; }
		Point operator +(Point ob) { //왼쪽 항(주체)를 this포인터로 값을 불러오고, 오른쪽 항(객체)만 가져와서 연산
			Point temp;
			temp.x = x + ob.x;  //temp.x = this->x + ob.x;
			temp.y = y + ob.y;  //temp.y = this->y + ob.x;
			return temp;
		}
	};

	int main() {

		Point ob1(3, 5), ob2(4, 6), ob3;
		cout << ob3.getX() << "," << ob3.getY() << endl;
		ob3 = ob1 + ob2;
		cout << ob3.getX() << "," << ob3.getY();
	}

	//예시5 == 이항연산자 || 도 가능!
	class Point {
		int x;
		int y;
	public:
		Point(int i, int j) { x = i; y = j; }
		Point() { x = 0; y = 0; }
		int getX() { return x; }
		int getY() { return y; }
		char operator ==(Point ob) { //클래스가 아닌 char (리턴값이 char) 문자열을 쓰고 싶으면 string형으로 바꿔도 됨!
			return (x == ob.x && y == ob.y) ? 'T' : 'F'; //같으면 T, 다르면 F
		}
	};

	int main() {

		Point ob1(3, 5), ob2(4, 6), ob3;
		cout << (ob1 == ob2); //연산자 우선순위 주의
	}

