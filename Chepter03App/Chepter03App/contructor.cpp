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
		printf("�̸� = %s, ���� = %d\n", name, age);
	}
};

int main()
{
	Human h = Human("���ΰ�", 29);
	h.intro();
	return 0;
}
