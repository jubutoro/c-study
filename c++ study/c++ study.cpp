#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
#include<iomanip>
#include<string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

////����1
//class A
//{
//private://���� ��� �ȵ�.
//	void a1() { cout << "a1\n"; }
//	void a2() { cout << "a2\n"; }
//public:
//	void b1() { cout << "a1\n"; }
//	void b2() { cout << "b2\n"; }
//	void b3() { cout << "b3\n"; }
//	void b4() { cout << "b4\n"; }
//};
//class B : public A{};
//
//int main() {
//	B bb;
//	bb;
//	return 0;
//}
//
////����2
//class A
//{
//	int x;
//public:
//	void setX(int i) { x = i;}
//	void showX() { cout << x << endl; }
//
//};
//class B :public A
//{
//	int y;
//public:
//	void setY(int i) { y = i; }
//	void showY() { cout << y << endl; }
//
//};
//
//int main() {
//	B bb;       //�Ļ�Ŭ������ ��ü
//	bb.x = 1;   //bb.setX(1)�� �´�
//	bb.y = 2;   //bb.setY(2)�� �´�
//	bb.showX(); //�⺻Ŭ������ �������
//	bb.showY(); //�Ļ�Ŭ������ �������
//}
//
////���� In-class member initializers �ٵ� �ǵ��� �����ڸ� �̿��ϱ� ����
//
//class A
//{
//	int x = 1;
//public:
//	A():x(2){} // A(){x=2;}
//	void setX(int i) { x = i; }
//	int getX() { return x; }
//};
//
//int main()
//{
//	A a1; //����Ʈ ������ ȣ��, ���� �Ⱥ��̴� A(){}
//	cout << a1.getX() << endl;
//}
//
////���� private ���
//class A
//{
//	int x;
//public:
//	void setX(int i) { x = i; }
//	void showX() { cout << x << endl; }
//};
//class B :private A //private ���
//{
//	int y;
//public:
//	void setXY(int i, int j) { setX(i); y = j; } //�⺻ Ŭ������ public ��� ����
//	void showXY() { showX(); cout << y << endl; }
//};
//
//int main()
//{
//	B bb;
//	bb.setXY(1, 2);
//	bb.showXY();
//	C cc;
//	cc.setXY(1, 3); //private����̶� setXY()�Լ��� private����̶� ���� �Ұ�.
//
//}
//
//class C :private B
//{
//
//};
////protected�� ����� ����, �ܺο��� ���� �Ұ�. �߾Ⱦ�
//
//
////���� - ��ӿ��� �����ڿ� �Ҹ���
//class A
//{
//public:
//	A() { cout << "A�� ������\n"; }
//	~A() { cout << "A�� �Ҹ���\n"; }
//
//};
//class B :public A
//{
//public:
//	B() { cout << "B�� ������\n"; }
//	~B() { cout << "B�� �Ҹ���\n"; }
//
//};
//
//int main()
//{
//	B ob;
//	return 0;
//}
//
////���� - �ڽ� Ŭ���� �����ڿ��� �θ� Ŭ���� �����ؿ� �Ű����� ����
//class A
//{
//	int a;
//public:
//	A(int i)/* ���� i��*/ {
//		cout << "A�� ������\n";
//		a = i;
//	}
//	~A() { cout << "A�� �Ҹ���\n"; }
//	void showA() { cout << a << endl; }
//
//};
//class B :public A {
//	int b;
//public:
//	B(int i, int j) :A(i)// i�� �⺻Ŭ���� �������� �Ű������� ����
//	{cout << "B�� ������\n"; }
//};
//
//int main()
//{
//	B bb(10, 20);
//	bb.showA();
//	bb.showA();
//	return 0;
//}
//
////���� - ������ ���߻�ӿ��� ������ �Ű����� ����
//class B {
//	double d; // double�� d ����
//public:
//	B(double dd) { d = dd; } 
//	double getD() { return d; }
//};  //d�� ����� �Լ�
//
//class D1 :public B { //���
//	int i; //int�� i����
//public:
//	D1(double dd, int ii) : B(dd) { i = ii; } //D2�κ��� ���� �Ű������� ����
//	int getI() { return i; }
//};  //i�� ����� �Լ�
//
//class D2 :public D1 {
//	char c;
//public:
//	D2(double dd, int ii, char cc) :D1(dd, ii) { c = cc; } //i�� d�� �Ű����� ����
//	void print() { 
//		cout << "Double : " << getD() << endl; 
//		cout << "int : " << getI() << endl;
//		cout << "Char : " << c << endl;	
//	}
//};
//
//int main() {
//	D2 d2(10.5, 10, 'H');
//	cout << d2.getD() << '\t' << d2.getI() << endl;
//	d2.print();
//}
//
////���� - Multiple inheritance
//
//class A1 
//{
//	int a;
//public:
//	A1() { cout << "A1's constructor.\n"; } //������ ��ħ
//	~A1() {cout<< "A1's distroyer\n";}
//	A1(int i) { a = i; }
//	int getA1() { return a; }
//
//};
//class A2
//{
//	int b;
//public:
//	A2() { cout << "A2's constructor.\n"; } //������ ��ħ
//	~A2() { cout << "A2's distroyer\n"; }
//	A2(int j) { b = j; }
//	int getA2() { return b; }
//};
//class B : public A1, public A2 // Multiple inheritance
//{
//	int c;
//public:
//	B() { cout << "B's constructor.\n"; }
//	~B() { cout << "B's distroyer\n"; }
//	B(int i, int j) : A1(i), A2(j) {};
//	void show() {
//		cout << getA1() << endl << getA2() << endl;
//	}
//};
//
//int main() {
//	B bb(1, 2);
//	bb.show();
//}
//
//
////���� - Using to Class
//
//class Name {
//	string name;
//public:
//	Name(string s) { name = s; }
//	void get_name(string s) { name = s; }
//	void print_name() { cout << name << "�� ��ȭ��ȣ�� "; }
//
//};
//
//class Phone :public Name {
//	string phone;
//public:
//	Phone(string s, string p ) : Name(s){phone=p;};
//	void get_phone(string p) { phone = p; }
//	void pring_phone() 
//	{
//		print_name(); cout << phone;
//	}
//};
//
//int main() {
//	Phone h("nope","010-010");
//	
//	h.pring_phone();
//
//}
//// �����ϱ�... ���

//���Ŭ����(Man,�������:�̸�,����)�� ����ÿ�
//��������� �ʱ�ȭ�ϴ� �����ڸ� �����Ͻÿ�.
//��Ÿ �Լ��� �����Ͻÿ�.
//���Ŭ�����κ��� ��ӹ��� �л�Ŭ����(student)�� ����ÿ�.
//(�������:��,�й�), ������, ��Ÿ�Լ�
//���Ŭ�����κ��� ��ӹ��� ����(Teacher)Ŭ������ ����ÿ�.
//(�������:����,������), ������, ��Ÿ�Լ�
//main�Լ����� �л���ü�� ������ü�� ����� �׽�Ʈ�غ��ÿ�.

class Man {
	const char* n;
	int a;
public:
	const char* name;
	int age;
	Man(const char* nn, int aa) { n = nn, a = aa; }
	
	void setName(const char* name) //set�Լ����� ����ְ�
	{
		n=name;
	}
	void setAge(int age)
	{
		a = age;
	}
	const char* getName() //get�Լ����� ��� [cin cout]�ƴ�
	{
		return n;
	}
	int getAge()
	{
		return a;
	}
	
};

class student : public Man 
{
	int C;
	int SN;
public:
	const char* Class;
	int StudentNumber;
	student(const char* nn, int aa, int CC, int SNSN) : Man(nn,aa) { C = CC, SN = SNSN; }

	void setClass(int Class) //set�Լ����� ����ְ�
	{
		C = Class;
	}
	void setStudentNumber(int StudentNumber)
	{
		SN = StudentNumber;
	}
	int getClass() //get�Լ����� ��� [cin cout]�ƴ�
	{
		return C;
	}
	int getStudentNumber()
	{
		return SN;
	}
	void print() 
	{
		cout << "�̸� : " << getName() << '\n' << "���� : " << getAge() << '\n' << "�г� : " << getClass() << '\n' << "�й� : " << getStudentNumber() << endl;
	}

	
};
class teacher : public Man {
	const char* m;
	const char* s;
public:
	const char* major;
	const char* subject;
	teacher (const char* nn, int aa, const char* mm, const char* ss) : Man(nn, aa) { m = mm, s = ss; }

	void setmajor(const char* major) //set�Լ����� ����ְ�
	{
		m = major;
	}
	void setsubject(const char* subject)
	{
		s = subject;
	}
	const char* getmajor() //get�Լ����� ��� [cin cout]�ƴ�
	{
		return m;
	}
	const char* getsubject()
	{
		return s;
	}
	void print()
	{
		cout << "�̸� : " << getName() << '\n' << "���� : " << getAge() << '\n' << "���� : " << getmajor() << '\n' << "������ : " << getsubject();
	}

};

int main() {
	student hj("heejun", 24, 3, 60170320);
	teacher han("smile han", 11, "computer software", "c++");
	hj.print();
	han.print();
}