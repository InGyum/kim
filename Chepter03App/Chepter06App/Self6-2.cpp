#include<stdio.h>
#include<string.h>

class Date
{
protected:
	int year, month, day;
public:
	Date(int y, int m, int d) {
		year = y; month = m; day = d;
	}
	void OutDate() {
		printf("%d%d%d", year, month, day);
	}

};


class Human
{
protected:
	char name[12];
	int age;
	Date birth;

public:
	Human(const char* aname, int aage, int y, int m, int d) : birth(y, m, d) {
		strcpy(name, aname);
		age = aage;
	}

	void intro() {
		printf("�̸� = %s,  ���� =%d\n", name, age);
		printf("����= ");
		birth.OutDate();
		printf("\n");
	}
};

int main() {
	Human kim("���ΰ�", 29, 1992, 9, 9);
	kim.intro();
}