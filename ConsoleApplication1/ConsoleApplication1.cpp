// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
/*this is test for output
This is for multiple line comments*/
#include <iostream>
#include <conio.h>
using namespace std;

//my code
int main()
{
	cout << "Hello World" << endl; //this print out "Hello World" and a line break
	cout << "This is test program for Limyx826" << endl << endl; //prints the message

	// endl and \n is line break
	
	cout << "Maximum 1,000,000" << endl;
	cout << "Simple addition \n";
	int A, B;
	int sum;
	cout << "Enter variable A \n";
	cin >> A;
	cout << "Enter variable B \n";
	cin >> B;
	sum = A + B;
	
	if (sum > 1000000) {
		cout << "Overcapacity! \n"; //if more than 1,000,000 it will show the text
	}
	else {
		cout << "Sum is: " << sum << endl;
	}
	cout << "Please press ANY key to continue";
	_getch(); //Required user input
	return 0;
}