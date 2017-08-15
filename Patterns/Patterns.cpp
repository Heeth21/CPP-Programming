#include "Patterns.h"
#include <iostream>

using namespace std;

int main()
{
	Patterns patterns;
	patterns.myMethod();

	getchar();
	getchar();
	return 0;
}

void Patterns::myMethod()
{
	int n;
	int a;
	int b;
	cout << "Enter a number:" << endl;
	cin >> n;
	cout << endl;

	//1
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << " *";
		}
		cout << endl;
	}
	cout << endl;

	//2
	for (int i = 1; i <= n; i++)
	{
		for (int j = n; j >= i; j--)
		{
			cout << " *";
		}
		cout << endl;
	}
	cout << endl;

	//3
	for (int i = 1; i <= n; i++)
	{
		for (int j = n; j >= i; j--)
		{
			cout << "  ";
		}
		for (int j = 1; j <= i; j++)
		{
			cout << "* ";
		}

		cout << endl;
	}
	cout << endl;

	//4
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << "  ";
		}
		for (int j = n; j >= i; j--)
		{
			cout << "* ";
		}

		cout << endl;
	}
	cout << endl;

	//5
	for (int i = 1; i <= n; i++)
	{
		for (int j = n; j >= i; j--)
		{
			cout << " ";
		}
		for (int j = 1; j <= i; j++)
		{
			cout << " *";
		}

		cout << endl;
	}
	cout << endl;

	//6
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << " ";
		}
		for (int j = n; j >= i; j--)
		{
			cout << "* ";
		}
		cout << endl;
	}
	cout << endl;

	//7
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cout << " *";
		}
		cout << endl;
	}
	cout << endl;

	//8
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (i == 1 || i == n || j == 1 || j == n)
			{
				cout << " *";
			}
			else
			{
				cout << "  ";
			}
		}
		cout << endl;
	}
	cout << endl;

	//9
	a = 1;
	b = n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (j == a || j == b)
			{
				cout << " *";
			}
			else
			{
				cout << "  ";
			}
		}
		a++;
		b--;
		cout << endl;
	}
	cout << endl;

	//10
	a = 1;
	b = n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (j == a || j == b || i == 1 || i == n || j == 1 || j == n)
			{
				cout << " *";
			}
			else
			{
				cout << "  ";
			}
		}
		a++;
		b--;
		cout << endl;
	}

}
