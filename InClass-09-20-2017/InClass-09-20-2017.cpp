// InClass-09-20-2017.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	int length;
	//length = str.length();
	cout << "Enter a string 5 characters long: " << endl;
	cin >> str;

	length = str.length();

	if (length == 5)
	{
		cout << "The string you entered is correct" << endl << endl;
	}
	else if (length > 5)
	{
		cout << "The string you entered is too long" << endl << endl;
	}
	else if (length < 5)
	{
		cout << "The string you entered is too small" << endl << endl;
	}

	system("pause");
    return 0;
}

