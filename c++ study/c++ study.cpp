#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
#include<iomanip>
#include<string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

 //���� 1
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

	point up() { // �Լ��� ������ Ŭ���� ���̸� ��ü�� ���� �����ϴ� ��!
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

	//����2 [��ġ������]
point up() {
	++x;
	++y;
	return *this;
	
	//�� ���� ���� ȿ��.

	point poerator++() {//poerator++�� �Լ� �̸����� �����ϸ� ���ذ� ����.
		++x;
		++y;
		return *this;
	
	}
	main�Լ��� ++p1;�ϸ� ��. (��ġ ++ió�� ���)


	//����3 [��ġ������]
	point poerator--()(int) {//poerator++�� �Լ� �̸����� �����ϸ� ���ذ� ����. (int)�� �ڿ� ������ ��ġ!
		--x;
		--y;
		return *this;

	}



	//����4 ���׿����� ����, ���� �� ����
	class Point {
		int x;
		int y;
	public:
		Point(int i, int j) { x = i; y = j; }
		Point() { x = 0; y = 0; }
		int getX() { return x; }
		int getY() { return y; }
		Point operator +(Point ob) { //���� ��(��ü)�� this�����ͷ� ���� �ҷ�����, ������ ��(��ü)�� �����ͼ� ����
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

	//����5 == ���׿����� || �� ����!
	class Point {
		int x;
		int y;
	public:
		Point(int i, int j) { x = i; y = j; }
		Point() { x = 0; y = 0; }
		int getX() { return x; }
		int getY() { return y; }
		char operator ==(Point ob) { //Ŭ������ �ƴ� char (���ϰ��� char) ���ڿ��� ���� ������ string������ �ٲ㵵 ��!
			return (x == ob.x && y == ob.y) ? 'T' : 'F'; //������ T, �ٸ��� F
		}
	};

	int main() {

		Point ob1(3, 5), ob2(4, 6), ob3;
		cout << (ob1 == ob2); //������ �켱���� ����
	}

