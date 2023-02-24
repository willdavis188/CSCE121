#include <iostream>
#include "functions.h"

using std::cout, std::cin, std::endl;

int main() {
	// TODO(student): print prompt for input
	cout << "Enter numbers 10 <= a <= b < 10000: ";

	// TODO(student): read the numbers from standard input
	int number1, number2;
	cin >> number1 >> number2;

	// TODO(student): validate input (and reprompt on invalid input)
	while (is_valid_range(number1, number2) == false) {
		cout << "Invalid Input" << endl;
		cout << "Enter numbers 10 <= a <= b < 10000: ";
		cin >> number1 >> number2;
	}

	// TODO(student): compute and display solution
	count_valid_mv_numbers(number1, number2);

	return 0;
}