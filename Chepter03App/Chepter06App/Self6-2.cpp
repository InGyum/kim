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
		printf("ÀÌ¸§ = %s,  ³ªÀÌ =%d\n", name, age);
		printf("»ıÀÏ= ");
		birth.OutDate();
		printf("\n");
	}
};

int main() {
	Human kim("±èÀÎ°â", 29, 1992, 9, 9);
	kim.intro();
}