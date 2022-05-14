#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
#include<iomanip>
#include<string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

////에시1
//class A
//{
//private://절대 상속 안됨.
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
////예시2
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
//	B bb;       //파생클래스의 객체
//	bb.x = 1;   //bb.setX(1)가 맞다
//	bb.y = 2;   //bb.setY(2)가 맞다
//	bb.showX(); //기본클래스의 멤버접근
//	bb.showY(); //파생클래스의 멤버접근
//}
//
////예시 In-class member initializers 근데 되도록 생성자를 이용하길 권장
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
//	A a1; //디폴트 생성자 호출, 눈에 안보이는 A(){}
//	cout << a1.getX() << endl;
//}
//
////예시 private 상속
//class A
//{
//	int x;
//public:
//	void setX(int i) { x = i; }
//	void showX() { cout << x << endl; }
//};
//class B :private A //private 상속
//{
//	int y;
//public:
//	void setXY(int i, int j) { setX(i); y = j; } //기본 클래스의 public 멤버 접근
//	void showXY() { showX(); cout << y << endl; }
//};
//
//int main()
//{
//	B bb;
//	bb.setXY(1, 2);
//	bb.showXY();
//	C cc;
//	cc.setXY(1, 3); //private상속이라 setXY()함수는 private취급이라 접근 불가.
//
//}
//
//class C :private B
//{
//
//};
////protected는 상속은 가능, 외부에서 접근 불가. 잘안씀
//
//
////예시 - 상속에서 생성자와 소멸자
//class A
//{
//public:
//	A() { cout << "A의 생성자\n"; }
//	~A() { cout << "A의 소멸자\n"; }
//
//};
//class B :public A
//{
//public:
//	B() { cout << "B의 생성자\n"; }
//	~B() { cout << "B의 소멸자\n"; }
//
//};
//
//int main()
//{
//	B ob;
//	return 0;
//}
//
////예시 - 자식 클래스 생성자에서 부모 클래스 생서앚에 매개변수 전달
//class A
//{
//	int a;
//public:
//	A(int i)/* 여기 i로*/ {
//		cout << "A의 생성자\n";
//		a = i;
//	}
//	~A() { cout << "A의 소멸자\n"; }
//	void showA() { cout << a << endl; }
//
//};
//class B :public A {
//	int b;
//public:
//	B(int i, int j) :A(i)// i는 기본클래스 생성자의 매개변수로 전달
//	{cout << "B의 생성자\n"; }
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
////예시 - 계층적 다중상속에서 계층적 매개변수 전달
//class B {
//	double d; // double형 d 선언
//public:
//	B(double dd) { d = dd; } 
//	double getD() { return d; }
//};  //d와 연결된 함수
//
//class D1 :public B { //상속
//	int i; //int형 i선언
//public:
//	D1(double dd, int ii) : B(dd) { i = ii; } //D2로부터 받은 매개변수를 전달
//	int getI() { return i; }
//};  //i와 연결된 함수
//
//class D2 :public D1 {
//	char c;
//public:
//	D2(double dd, int ii, char cc) :D1(dd, ii) { c = cc; } //i와 d에 매개변수 전달
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
////예시 - Multiple inheritance
//
//class A1 
//{
//	int a;
//public:
//	A1() { cout << "A1's constructor.\n"; } //생성자 겹침
//	~A1() {cout<< "A1's distroyer\n";}
//	A1(int i) { a = i; }
//	int getA1() { return a; }
//
//};
//class A2
//{
//	int b;
//public:
//	A2() { cout << "A2's constructor.\n"; } //생성자 겹침
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
////예시 - Using to Class
//
//class Name {
//	string name;
//public:
//	Name(string s) { name = s; }
//	void get_name(string s) { name = s; }
//	void print_name() { cout << name << "의 전화번호는 "; }
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
//// 복습하기... 어렵

//사람클래스(Man,멤버변수:이름,나이)를 만드시오
//멤버변수를 초기화하는 생성자를 구현하시오.
//기타 함수를 구현하시오.
//사람클래스로부터 상속받은 학생클래스(student)를 만드시오.
//(멤버변수:반,학번), 생성자, 기타함수
//사람클래스로부터 상속받은 교수(Teacher)클래스를 만드시오.
//(멤버변수:전공,담당과목), 생성자, 기타함수
//main함수에서 학생객체와 교수객체를 만들어 테스트해보시오.

class Man {
	const char* n;
	int a;
public:
	const char* name;
	int age;
	Man(const char* nn, int aa) { n = nn, a = aa; }
	
	void setName(const char* name) //set함수에서 집어넣고
	{
		n=name;
	}
	void setAge(int age)
	{
		a = age;
	}
	const char* getName() //get함수에서 출력 [cin cout]아님
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

	void setClass(int Class) //set함수에서 집어넣고
	{
		C = Class;
	}
	void setStudentNumber(int StudentNumber)
	{
		SN = StudentNumber;
	}
	int getClass() //get함수에서 출력 [cin cout]아님
	{
		return C;
	}
	int getStudentNumber()
	{
		return SN;
	}
	void print() 
	{
		cout << "이름 : " << getName() << '\n' << "나이 : " << getAge() << '\n' << "학년 : " << getClass() << '\n' << "학번 : " << getStudentNumber() << endl;
	}

	
};
class teacher : public Man {
	const char* m;
	const char* s;
public:
	const char* major;
	const char* subject;
	teacher (const char* nn, int aa, const char* mm, const char* ss) : Man(nn, aa) { m = mm, s = ss; }

	void setmajor(const char* major) //set함수에서 집어넣고
	{
		m = major;
	}
	void setsubject(const char* subject)
	{
		s = subject;
	}
	const char* getmajor() //get함수에서 출력 [cin cout]아님
	{
		return m;
	}
	const char* getsubject()
	{
		return s;
	}
	void print()
	{
		cout << "이름 : " << getName() << '\n' << "나이 : " << getAge() << '\n' << "전공 : " << getmajor() << '\n' << "담당과목 : " << getsubject();
	}

};

int main() {
	student hj("heejun", 24, 3, 60170320);
	teacher han("smile han", 11, "computer software", "c++");
	hj.print();
	han.print();
}