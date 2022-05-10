#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
#include<iomanip>
#include<string>
using std::cout;
using std::cin;
using std::endl;
using std::string;


class cat {
	int age;
	string name;
public:
	cat(int age, string name)
	{
		this->age = age;
		this->name = name;
		cout << "냥-하\n";
	}
	cat()
	{
		age = 1;
		name = "고양이";
	};
	~cat()
	{
		cout << "냥-바\n";
	};
	void setAge(int age)
	{
		this->age = age;
	};
	void setName(string name)
	{
		this->name = name;
	};
	int getAge()
	{
		return age;
	};
	string getName()
	{
		return name;
	};

};



int main(void)
{
	cat dobi(5, "dobi"), * pdobi = &dobi, mari(3, "mari");
	int j, a;
	string n;


	cout << "동적 메모리에 입력할 고양이의 수는 몇입니까? - \n";
	cin >> j;

	cat* pcat = new cat[j]; //객체 배열을 동적 메모리 할당
	if (!pdobi) { cout << "동적 메모리 할당이 되지 않았습니다."; exit(1); }

	for (int i = 0; i < j; i++)
	{
		cout << i + 1 << "번째 고양이의 나이를 입력해 주세요. : ";
		cin >> a;
		cout << i + 1 << "번째 고양이의 나이는 " << a << "입니다.\n";
		cout << i + 1 << "번째 고양이의 이름을 입력해 주세요. : ";
		cin >> n;
		cout << i + 1 << "번째 고양이의 이름은 " << n << "입니다.\n";
	}
	return 0;
}

