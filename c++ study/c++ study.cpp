#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
#include<iomanip>
#include<string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

////overloading - 함수중첩, 같은 클래스 안에서 일어나는 병렬적인 것
////overriding - 가상함수, 기본 클래스의 멤버함수와 같은 이름의 함수를 파생 클래스에서 재정의하여 사용할 때,
//// 기본 클래스의 함수에 virtual을 붙여 사용하는 수직적인 것
//// static binding - 컴파일시 변수의 위치와 함수가 실행할 명령이 결정되는 경우 : static 변수, overloading
//// dynamic binding - 실제 실행할 떄(run time) 결정되는 경우 : 지역 변수, overrriding
//
//void sub();
//int main() {
//	cout << "start\n";
//	sub();
//	sub();
//	sub();
//}
//void sub()
//{
//	int x = 10;
//	//동적 바인딩, run-time시
//	static int y = 10;
//	//정적 바인딩, y의 초기값은 컴파일시 10으로 정해지며, 실행시에 이 선언문은 실행하지 않음
//	//순서는 x가 먼저 이지만, 컴파일시 y의 값이 10으로 정해지므로(static이기 때문) x보다 먼저 값이 결정됨.
//	cout << x << y << endl;
//	x++;
//	y++;
//}
//
////예시 - static_cast
////dynamic_cast는 down casting을 안전하게 하기 위해 씀 (고급과정)
//int main() {
//	int x = 10, y = 4;
//	cout << x / y << endl;
//	cout << (double)x / y << endl;
//	cout << static_cast<double>(x) / y << endl;
//}
//
//// 예시 - virtual function
//// overriding을 구현하는 방법
//
//class A
//{
//public:
//	virtual int SS(int i) { return(i * 2); }
//	// 재정의 가능한 함수, 자식 클래스에서 재정의하면 이 함수는 무시됨
//	// 그런데 함수명, 리턴형, 매개변수의 개수와 자료형은 같아야 하고 기능만 다르게 만들어야 함.
//
//};
//
//class B : public A
//{
//public:
//	int SS(int i) { return(i * 3); }
//	//재정의 시에는 별도로 지시어 필요 X
//};

// static binding(overloading)

//class A
//{
//public:
//	int ss(int i) { return(i * 2); } //앞에 virtual을 붙이면 자식클래스에서 재정의 할 경우 무시됨.
//	int dd(int i) { return(ss(i)*2); }
//
//};
//
//class B : public A
//{
//public:
//	int ss(int i) { return(i * 3); }//자식클래스에서 ss함수 재정의
//
//};
//
//int main()
//{
//	B bb;
//	A *pA = new A;
//	A *pB = new B;
//	cout << bb.dd(2) << endl;
//	cout << pA->dd(2) << endl;
//	cout << pB->dd(2) << endl;
//	delete pA; delete pB;
//	return 0;
//}

//pure virtual function 

class Shape {
protected:
	double x, y;
public:
	//virtual double area() { return 0; }// 일반 가상 함수
	virtual double area() = 0;

};
class Rectangle : public Shape
{
private:
	double height, width;
public:
	Rectangle(double h, double w)
	{
		height = h; width = w;
	}
	double area() 
	{
		return(width * height);
	}

};
class Triangle : public Shape
{
private:
	double height, width;
public:
	Triangle (double h, double w)
	{
		height = h; width = w;
	}
	double area()
	{
		return(width * height/2.0);
	}

};
int main() {

	//Shape ss; 순수가상함수가 있으면 추상클래스이기 때문에 객체 만들 수 없음
	Shape *p; // 포인터객체는 가능
	Rectangle nemo(10, 20);
	Triangle semo(10, 20);
	
	p = &nemo;//자식의 주소를 부모 포인터에 대입
	cout << "nemo's size:" << p->area() << endl;
	p = &semo;
	cout << "semo's size:" << p->area() << endl;

}