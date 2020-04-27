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
		printf("이름 = %s, 나이=%d\n", name, age);
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
		printf("이이는 사, 이삼은 육, 이사 팔\n");
	}
	//void report() {
	//	printf("이름 %s 나이 %d 학번 %d\n",name,age,stunum);

	//}

	//void intro() {
	//	printf("이름 %s 나이 %d\n", name, age);
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
		printf("%s을 연구하고 논문을 쓴다.\n", thesis);
	}
};


int main() {

	Human kim("김인겸", 29);
	kim.intro();
	Student han("김한결", 15, 123456);
	han.intro();
	han.study();
	//han.report();

	Graduate moon("김인겸", 29, 920629, "게임방 상권 분석");
	moon.research();

}