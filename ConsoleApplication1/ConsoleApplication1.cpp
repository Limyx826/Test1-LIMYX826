// ConsoleApplication1.cpp : Defines the entry point for the console application.
// Author: Limyx826

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

	int y = 1;
	int *p = new int;
	int myArr[5];
	p = myArr;
	cout << "5 numbers \nfrom 0 to 4 \n";

	//This is for testing arrays
	for (int x = 0; x < 5; x++) {
		myArr[x] = y;
		y++;
		cout << x << ":" << myArr[x] << endl;
	}

	cout << "Size of myArr:" << sizeof(myArr) << endl; //Number of bytes in memory
	cout << "Address:" << p << endl << endl;

	int ext;
	for(ext = 0; ext < 1;)
	{
		//This part is for mode selection
		int slt = 0;

		cout << "Press 1 for Addition, 2 for Subraction, 3 for Multiplication, 4 for Division" << endl;
		cin >> slt;

		switch (slt) {

		case 1: //Addition
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

			break;

		case 2: //Subtraction
			cout << "Simple Subtraction" << endl;
			int sub;
			cout << "Enter variable A \n";
			cin >> A;
			cout << "Enter variable B \n";
			cin >> B;
			sub = A - B;
			cout << "Answer is: " << sub << endl;
			break;

		case 3: //Multiplication
			cout << "Simple Multiplication" << endl;
			int mlt;
			cout << "Enter variable A \n";
			cin >> A;
			cout << "Enter variable B \n";
			cin >> B;
			mlt = A * B;
			cout << "Answer is: " << mlt << endl;
			break;

		case 4: //Division
			cout << "Simple Division" << endl;
			double div; //use double for division as most division end in decimals
			cout << "Enter variable A \n";
			cin >> A;
			cout << "Enter variable B \n";
			cin >> B;
			div = (double)A / B; //double at the front of A is for conversion to double
			cout << "Answer is: " << div << endl;
			break;

		default:
			cout << "Error" << endl;

		}

		int rtn;
		cout << "Press 1 to return, Press Any key to exit \n";
		cin >> rtn;
		if (rtn == 1) {
			ext = 0;
			cout << "Please press ANY key to continue \n";
			_getch(); //Required user input
		}

		else {
			ext = 1;
			cout << "Please press ANY key to continue \n";
			_getch(); //Required user input
		}
	}
	return 0;
}