#include "Calender.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int currentMonth;

int main()
{
	Calender calender;
	calender.myMethod();

	getchar();
	getchar();
	return 0;
}

void Calender::myMethod()
{
	int weekday;
	int numOfDays;
	int year;

	cout << "Enter the year: ";
	cin >> year;
	cout << endl;
	spaces(8);
	cout << year << endl << endl;

	string monthName[] = { "January","February","March","April","May","June","July","August","September","October","November","December" };
	weekday = currentMonthDay(year);

	while (currentMonth < 12)
	{
		if (currentMonth >= 2 && currentMonth <= 7)
			spaces(8);
		else
			spaces(7);

		cout << monthName[currentMonth] << endl;
		cout << " --------------------- " << endl;
		cout << "  S  M  T  W  T  F  S  " << endl;
		cout << " --------------------- " << endl;

		numOfDays = getMonthDays(year);
		displayMonth(numOfDays, &weekday);
		currentMonth++;
	}
}

bool Calender::isLeapYear(int year)
{
	return (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0));
}

int Calender::currentMonthDay(int year)
{
	int a, b, c;
	a = (year - 1) / 4;
	b = (year - 1) / 100;
	c = (year - 1) / 400;
	return ((year + a - b + c) % 7);
}

int Calender::getMonthDays(int year)
{
	if (currentMonth == 1)
	{
		if (isLeapYear(year) == true)
			return 29;
		else
			return 28;
	}
	else if (currentMonth == 0 || currentMonth == 2 || currentMonth == 4 || currentMonth == 6 || currentMonth == 7 || currentMonth == 9 || currentMonth == 11)
	{
		return 31;
	}
	else { return 30; }
}

void Calender::displayMonth(int monthDays, int *weekdays)
{
	spaces(3 * (*weekdays));
	int i = 1;
	while (i <= monthDays)
	{

		cout << setw(3) << i;

		if ((*weekdays) == 6)
		{
			(*weekdays) = -1;
			cout << endl;
		}

		(*weekdays)++;
		i++;
	}
	cout << endl << endl << endl;
}

void Calender::spaces(int s)
{
	int i = 1;
	while (i <= s)
	{
		cout << " ";
		i++;
	}
}

Calender::Calender()
{
	currentMonth = 0;
}