//Lecture 9 supplementary program

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {

	//example 1
	/*
	short unsigned int i = 0; // short only uses 2 bytes instead of 4, unsigned means the value cannot be negative.

	cout << i-- << endl; // outputs 0 since it is still a post decrement
	cout << i << endl; //outputs 65535 the max value of the 2 bytes it can use to represent. The variable is represented by two's complement but cannot be negative so it becomes max value.
	cout << ++i << endl; // returns the value to 0 since it has overflowed back to 0;
	*/
	//relational Operators
	//when using multiple character comparators ensure there is no space between them (>= not > =)
	if (5 > 0) { 
		cout << "Greater than" << endl; // wil print
	}
	if (5 < 0) {
		cout << "Less than" << endl; // will not print
	}
	if (5 >= 0) {
		cout << "Greater than or equal" << endl; // will print
	}
	if (5 <= 0) {
		cout << "Less than or equal" << endl; // will not print
	}
	if (5 == 0) {
		cout << "Exactly equal" << endl; // will not print
	}
	if (5 != 0) {
		cout << "Not equal" << endl; // will print
	}
	if (5 > 0 && 5 != 0) {
		cout << "And" << endl; // will print
	}
	if (5 > 0 || 5 == 0) {
		cout << "OR" << endl; // will print
	}
	else {
		cout << "Always check your comparators to be what you want" << endl;
	}

	cout << " \n \n" << endl;

	//logic statements
	int mark;
	
	cout << "Enter your mark: " << endl; // gets integer mark from user
	cin >> mark;

	if (mark > 90) { // checks if the mark entered is above 90% and returns A+ if it is and not A+ if it isn't.
		cout << "Your grade is A+." << endl;
	}
	else {
		cout << "Your grade is not A+" << endl;
	}

	if (mark >= 80 && mark < 90) { // Checks if the mark is within the range from 80% to 89% and returns the appropriate letter grade. 
		cout << "Your grade is B+" << endl;
	}
	// using seperate if statements for checking the same condition can result in multiple outputs. Use else if or switch statements for multiple checks of the same condition

	if (mark > 90) { // checks for grades over 90
		cout << "A+" << endl;
	}
	else if (mark > 80) { // checks for grades over 80 but since we already filtered out grades over 90 this will only catch 81-90
		cout << "B+" << endl;
	}
	else { // for any other values it outputs a standard statement
		cout << "C or less" << endl;
	}
	//since these statements are linked under the umbrella of a single if statement it will only output one branch of the if statement.

	//If statements can be nested for more complex evaluations
	int temp;
	cout << "Enter the temperature: " << endl;
	cin >> temp;

	if (temp > 20) { // checks if it is warm
		if (temp > 40) { // checks if it is too warm
			cout << "Turn on AC" << endl;
		}
		else { // catches temperature over 40
			cout << "Go for a swim" << endl;
		}
	}
	else { // catches if the temp is below 20 
		cout << "Stay home, too cold to swim" << endl;
	}
	//only one of the three output conditions will be met so only a single output will be given for each time through this check.





	system("pause");
	return 0;
}