#include <stdio.h>

class Date;
class Time
{
	friend void OutToday(Date&, Time&);
private:
	int hour, min, sec;
public:
	Time(int h, int m, int s) {
		if (h >= 0 && h < 24) { hour = h; }
		else { hour = 0; }
		if (m >= 0 && m < 60) { min = m; }
		else { min = 0; }
		if (s >= 0 && s < 60) { sec = s; }
		else { sec = 0; }
	}
};


class Date {
	friend void OutToday(Date&, Time&);
private:
	int year, mon, day;
public:
	Date(int y, int m, int d) {
		if (y >= 1900 && y <= 9999) { year = y; }
		else { y = 1900; }
		if (m >= 0 && m <= 12) { mon = m; }
		else { mon = 0; }
		if (d >= 0 && d <= 31) { day = d; }
		else { day = 0; }
	}
};

void OutToday(Date& d, Time& t)
{
	printf("오늘은 %d년 %d월 %d일이며 지금 시간은 %d:%d:%d입니다.\n",
		d.year, d.mon, d.day, t.hour, t.min, t.sec);
}

int main()
{
	Date d(2018, 06, 29);
	Time t(12, 34, 56);
	OutToday(d, t);
}
