#include <stdio.h>
#include <conio.h>
#include <math.h>
#include "cursor.h"



class Point
{
protected:
	int x, y;
	char ch;

public:
	Point(int ax, int ay, char ach) { x = ax, y, ay, ch = ach; }
	virtual void show() {
		gotoxy(x, y);
		putch(ch);
	}

	virtual void hide() {
		gotoxy(x, y);
		putch(' ');
	}

	void move(int nx, int ny) {
		hide();
		x = nx;
		y = ny;
		show();
	}
};

class Circle : public Point
{
protected:
	int radius;

public:
	Circle(int ax, int ay, char ach, int arad) : Point(ax, ay, ach) { radius = arad; }
	void show() { gotoxy(radius * x, radius * y); putch(ch); }
	void show() { gotoxy(radius * x, radius * y); putch(' '); }
	void move(int nx, int ny) {
		hide();
		x = nx;
		y = ny;
		show();
	}
};



int main() {
	Point p(1, 1, 'P');
	//Circle c(20, 10, 'C', 12);
	Circle c(20, 10, 'C', 12);

	p.show();
	c.show();

	getch();
	p.move(4,1);
	getch();
	c.move(4, 1);
	getch();
}