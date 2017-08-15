#include "LogarithmTables.h"
#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
	LogarithmTables logarithmTables;
	logarithmTables.generateTable();

	getchar();
	getchar();
	return 0;
}


void LogarithmTables::generateTable()
{
	double val = 0;
	double res = 0;

	int n = 90;
	int k = 0;

	cout << endl << endl;

	for (int i = 0; i <= 19; i++)
	{
		if (i <= 10)
			cout << setw(11) << "___________";
		else
			cout << setw(7) << "_______";
	}

	cout << endl << "|";

	cout << setw(121) << "|";
	cout << setw(63) << "|" << endl << "|";
	cout << setw(65) << "LOGARITHM";
	cout << setw(56) << "|";
	cout << setw(39) << "MEAN DIFFERENCE";
	cout << setw(24) << "|";

	cout << endl << "|";

	for (int i = 0; i <= 19; i++)
	{
		if (i <= 10)
		{
			if (i == 10)
				cout << setw(11) << "__________|";
			else
				cout << setw(11) << "___________";
		}

		else
		{
			if (i == 19)
				cout << setw(7) << "______|";
			else
				cout << setw(7) << "_______";
		}
	}

	cout << endl << "|";

	for (int i = 0; i <= 19; i++)
	{
		if (i <= 10)
			cout << setw(11) << "          |";
		else
			cout << setw(7) << "      |";
	}

	cout << endl << "|";

	cout << setw(11) << "          |";

	for (int i = 0; i <= 18; i++)
	{
		if (i < 10)
			cout << "  " << setw(4) << i << "    |";
		else
			cout << "  " << setw(2) << (i - 9) << "  |";
	}

	cout << endl << "|";

	for (int i = 0; i <= 19; i++)
	{
		if (i <= 10)
			cout << setw(11) << "__________|";
		else
			cout << setw(7) << "______|";
	}

	cout << endl;

	for (int i = 1; i <= n; i++)
	{
		k = 1;
		cout << "|";

		for (int j = 0; j <= 19; j++)
		{
			if (j <= 10)
				cout << setw(11) << "          |";
			else
				cout << setw(7) << "      |";
		}

		cout << endl << "|";

		for (int j = 0; j <= 19; j++)
		{
			if (j <= 10)
			{
				if (j == 0)
					cout << "  " << setw(4) << setfill(' ') << i + 9 << "    |";

				else
				{
					val = (double)(i + 9) + (double)((j - 1) * 0.1);
					res = log10(val);
					res = floor(res * 10000) - 10000;
					cout << "   " << setw(4) << setfill('0') << res << "   |";
				}

			}

			else
			{
				res = (double)(i + 9) + (double)((j - 11) * 0.1);
				val = res + (double)(k * 0.01);
				val = (floor(log10(val) * 10000) - 10000) - (floor(log10(res) * 10000) - 10000);
				cout << "  " << setw(2) << setfill('0') << val << "  |";
				k++;
			}

		}

		cout << endl << "|";

		for (int j = 0; j <= 19; j++)
		{
			if (j <= 10)
				cout << setw(11) << "__________|";
			else
				cout << setw(7) << "______|";
		}

		cout << endl;
	}
}
