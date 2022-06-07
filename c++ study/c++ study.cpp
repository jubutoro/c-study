#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
#include<iomanip>
#include<string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

////overloading - �Լ���ø, ���� Ŭ���� �ȿ��� �Ͼ�� �������� ��
////overriding - �����Լ�, �⺻ Ŭ������ ����Լ��� ���� �̸��� �Լ��� �Ļ� Ŭ�������� �������Ͽ� ����� ��,
//// �⺻ Ŭ������ �Լ��� virtual�� �ٿ� ����ϴ� �������� ��
//// static binding - �����Ͻ� ������ ��ġ�� �Լ��� ������ ����� �����Ǵ� ��� : static ����, overloading
//// dynamic binding - ���� ������ ��(run time) �����Ǵ� ��� : ���� ����, overrriding
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
//	//���� ���ε�, run-time��
//	static int y = 10;
//	//���� ���ε�, y�� �ʱⰪ�� �����Ͻ� 10���� ��������, ����ÿ� �� ������ �������� ����
//	//������ x�� ���� ������, �����Ͻ� y�� ���� 10���� �������Ƿ�(static�̱� ����) x���� ���� ���� ������.
//	cout << x << y << endl;
//	x++;
//	y++;
//}
//
////���� - static_cast
////dynamic_cast�� down casting�� �����ϰ� �ϱ� ���� �� (��ް���)
//int main() {
//	int x = 10, y = 4;
//	cout << x / y << endl;
//	cout << (double)x / y << endl;
//	cout << static_cast<double>(x) / y << endl;
//}
//
//// ���� - virtual function
//// overriding�� �����ϴ� ���
//
//class A
//{
//public:
//	virtual int SS(int i) { return(i * 2); }
//	// ������ ������ �Լ�, �ڽ� Ŭ�������� �������ϸ� �� �Լ��� ���õ�
//	// �׷��� �Լ���, ������, �Ű������� ������ �ڷ����� ���ƾ� �ϰ� ��ɸ� �ٸ��� ������ ��.
//
//};
//
//class B : public A
//{
//public:
//	int SS(int i) { return(i * 3); }
//	//������ �ÿ��� ������ ���þ� �ʿ� X
//};

// static binding(overloading)

//class A
//{
//public:
//	int ss(int i) { return(i * 2); } //�տ� virtual�� ���̸� �ڽ�Ŭ�������� ������ �� ��� ���õ�.
//	int dd(int i) { return(ss(i)*2); }
//
//};
//
//class B : public A
//{
//public:
//	int ss(int i) { return(i * 3); }//�ڽ�Ŭ�������� ss�Լ� ������
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
	//virtual double area() { return 0; }// �Ϲ� ���� �Լ�
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

	//Shape ss; ���������Լ��� ������ �߻�Ŭ�����̱� ������ ��ü ���� �� ����
	Shape *p; // �����Ͱ�ü�� ����
	Rectangle nemo(10, 20);
	Triangle semo(10, 20);
	
	p = &nemo;//�ڽ��� �ּҸ� �θ� �����Ϳ� ����
	cout << "nemo's size:" << p->area() << endl;
	p = &semo;
	cout << "semo's size:" << p->area() << endl;

}