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
		printf("ÀÌ¸§ = %s, ³ªÀÌ = %d\n", name, age);
	}
};

int main()
{
	Human h = Human("±èÀÎ°â", 29);
	h.intro();
	return 0;
}
