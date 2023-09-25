// =================================================
//Author: Jack Grimes
//Date: 09-25-23
//Desc: First look at if statements.
// =================================================
#include <iostream>

using namespace std;
int main()
{
	int number = 10;

	if (number == 10) {
		cout << number << endl;
	}
	cout << "Out of if statement" << endl;


	if ('A' == 65) {
		cout << "good" << endl;
	}

	if ('A' == 'A') {
		cout << "Good again" << endl;
	}

	string name = "Bob";

	if (name.at(0) == 'B') {
		cout << "Your name starts with a B" << endl;
	}
}