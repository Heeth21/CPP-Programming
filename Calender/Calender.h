#pragma once

class Calender
{
public:
	Calender();
	void myMethod();
	void displayMonth(int, int*);
	void spaces(int);
	int currentMonthDay(int);
	int getMonthDays(int);
	bool isLeapYear(int);

};