#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;


class Human
{
protected:
	char name[12];
	int age;
public:
	Human(const char* aname, int aage) 
	{ 
		strcpy(name, aname); 
		age = aage; }
	virtual void intro() {
		printf("%s�� %d�� �Դϴ�\n", name, age);
	}
};

class Student : public Human {
protected:
	int stunum;
public:
	Student(const char* aname, int aage, int astunum) : Human(aname, aage) 
	{
		stunum = astunum;
	}
	void intro() { printf("%d��, %s�Դϴ�\n", stunum, name); }
};

int main() {
	Human h("���ΰ�", 29);
	Student s("�����", 45, 25);

	Human* pH;
	Student* pS;

	/*printf("Human size %d / Student size %d\n", sizeof(h), sizeof(s));*/

	/*pH = &h;
	pH->intro();*/
	/*pS = &s;
	pS->intro();*/
	/*pH = &s;
	pH->intro();*/
	int sel = 0;
	while (true)
	{
		cout << "���ϴ� ���� ������ (1:Human, 2:Student, 9:����)";
		cin >> sel;




		if (sel == 1)
		{
			pH = &h;
		}
		else if (sel == 2)
		{
			pH = &s;
		}

		else if (sel == 9)
		{
			exit(-1);
		}
		else
		{
			cout << "�´� ���� �����ϴ�" << endl;
		}
		pH->intro();

	}

}