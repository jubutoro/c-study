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
		cout << "��-��\n";
	}
	cat()
	{
		age = 1;
		name = "�����";
	};
	~cat()
	{
		cout << "��-��\n";
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


	cout << "���� �޸𸮿� �Է��� ������� ���� ���Դϱ�? - \n";
	cin >> j;

	cat* pcat = new cat[j]; //��ü �迭�� ���� �޸� �Ҵ�
	if (!pdobi) { cout << "���� �޸� �Ҵ��� ���� �ʾҽ��ϴ�."; exit(1); }

	for (int i = 0; i < j; i++)
	{
		cout << i + 1 << "��° ������� ���̸� �Է��� �ּ���. : ";
		cin >> a;
		cout << i + 1 << "��° ������� ���̴� " << a << "�Դϴ�.\n";
		cout << i + 1 << "��° ������� �̸��� �Է��� �ּ���. : ";
		cin >> n;
		cout << i + 1 << "��° ������� �̸��� " << n << "�Դϴ�.\n";
	}
	return 0;
}

