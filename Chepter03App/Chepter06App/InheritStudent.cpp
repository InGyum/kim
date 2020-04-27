#include <stdio.h>
#include <string.h>

class Human
{
private:
	char name[12];
	int age;

public:
	Human(const char* aname, int aage) {
		strcpy(name, aname);
		age = aage;

	}
	void intro() {
		printf("�̸� = %s, ����=%d\n", name, age);
	}
};

class Student : public Human
{
private:
	int stunum;

public:
	Student(const char* aname, int aage, int astunum) :Human(aname, aage) {
		stunum = astunum;
	}
	void study() {
		printf("���̴� ��, �̻��� ��, �̻� ��\n");
	}
	//void report() {
	//	printf("�̸� %s ���� %d �й� %d\n",name,age,stunum);

	//}

	//void intro() {
	//	printf("�̸� %s ���� %d\n", name, age);
	//}

};
class Graduate : public Student
{
protected:
	char thesis[32];

public:
	Graduate(const char* aname, int aage, int astunum, const char* athesis) : Student(aname, aage, astunum) {
		strcpy(thesis, athesis);
	}
	void research() {
		printf("%s�� �����ϰ� ���� ����.\n", thesis);
	}
};


int main() {

	Human kim("���ΰ�", 29);
	kim.intro();
	Student han("���Ѱ�", 15, 123456);
	han.intro();
	han.study();
	//han.report();

	Graduate moon("���ΰ�", 29, 920629, "���ӹ� ��� �м�");
	moon.research();

}