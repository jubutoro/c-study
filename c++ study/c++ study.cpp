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
class dog {
	int age;
public:
	dog(int a = 1);  //디폴트 매개변수를 갖는 생성자
	~dog();
	int getage();
	void setage(int a);

};

dog::dog(int a) { age = a; } //생성자의 정의를 클래스 바깥쪽으로 함. ** 이때 함수와 동일하게 선언에만 디폴트 값을 써야함.
dog::~dog() {
	cout << "소멸\n";
}
int dog::getage() {
	return age;
}
void dog::setage(int a)
{
	age = a;
}

int main()
{
	dog meri, happy(5);
	cout << happy.getage() << "," << meri.getage() << endl;
}

////예시 2
//
//int gopsem(int i, int j, int k = 1, int l = 1)
//{
//	return(i * j * k * l);
//}
//
//int main()
//{
//	cout << gopsem(1, 2) << endl;
//	cout << gopsem(1, 2,3) << endl;
//	cout << gopsem(1, 2,3,4) << endl;
//}
//
////예시 3
//class cat {
//	int age;
//	string name;
//public:
//	cat(int age, string name)
//	{
//		this->age = age;
//		this->name = name;
//		cout << name <<"하이\n";
//	}
//	cat()
//	{
//		age = 1;
//		name = "고양이";
//	};
//	~cat()
//	{
//		cout << "냥-바\n";
//	};
//
//	void cry(int p=1) {
//		for (int i = 0; i < p; i++)
//			cout << "크앙!" << endl;
//	}//디폴트값 설정
//
//	void setAge(int age)
//	{
//		this->age = age;
//	};
//	void setName(string name)
//	{
//		this->name = name;
//	};
//	int getAge()
//	{
//		return age;
//	};
//	string getName()
//	{
//		return name;
//	};
//
//};
//
//
//
//int main(void)
//{
//	cat dobi(5, "dobi"), * pdobi = &dobi, mari(3, "mari");
//	int j, a;
//	string n;
//
//	dobi.cry();
//	mari.cry(3);
//
//	cout << "동적 메모리에 입력할 고양이의 수는 몇입니까? - \n";
//	cin >> j;
//
//	cat* pcat = new cat[j]; //객체 배열을 동적 메모리 할당
//	if (!pdobi) { cout << "동적 메모리 할당이 되지 않았습니다."; exit(1); }
//
//	for (int i = 0; i < j; i++)
//	{
//		cout << i + 1 << "번째 고양이의 나이를 입력해 주세요. : ";
//		cin >> a;
//		cout << i + 1 << "번째 고양이의 나이는 " << a << "입니다.\n";
//		cout << i + 1 << "번째 고양이의 이름을 입력해 주세요. : ";
//		cin >> n;
//		cout << i + 1 << "번째 고양이의 이름은 " << n << "입니다.\n";
//	}
//	
//	return 0;
//}
