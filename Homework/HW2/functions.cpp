#include <iostream>
#include "functions.h"

using std::cout, std::endl;

bool is_valid_range(int a, int b) {
	if (a <= b) {
		if ((a >= 10 && a < 10000) && (b >= 10 && b < 10000)) {
			return true;
		}
	}
	return false;
}

char classify_mv_range_type(int number) {
	// TODO(student): return 'M' if number has /\/\... pattern,
	// return 'V' if number has \/\/ pattern, and return 'N' otherwise

	int currentDigit = number % 10;
	number /= 10;
	int nextDigit = number % 10;

	bool mvCheck = false;
	bool alternate = false;
	bool test = false;

	while (number != 0) {
		alternate = mvCheck;

		if (currentDigit < nextDigit) {
			mvCheck = true;
		} else if (currentDigit > nextDigit) {
			mvCheck = false;
		} else {
			return 'N';
		}

		currentDigit = nextDigit;
		number /= 10;
		nextDigit = number % 10;

		if (alternate == mvCheck && test) {
			return 'N';
		}
		test = true;
	}

	if (mvCheck) {
		return 'V';
	} else {
		return 'M';
	}
}

	// int ones = 0;
	// int tens = 0;
	// int hundreds = 0;
	// int thousands = 0;

	// ones = number % 10;
	// tens = (number / 10) % 10;
	// hundreds = (number / 100) % 10;
	// thousands = (number / 1000) % 10;

	// if (number < 100) {
	// 	if (ones > tens) {
	// 		return 'M';
	// 	} else if (tens > ones) {
	// 		return 'V';
	// 	} else {
	// 		return 'N';
	// 	}
	// } else if (number >= 100 && number < 1000) {
	// 	if (hundreds < tens && tens > ones) {
	// 		return 'M';
	// 	} else if (hundreds > tens && tens < ones) {
	// 		return 'V';
	// 	} else {
	// 		return 'N';
	// 	}
	// } else if (number >= 1000 && number < 10000) {
	// 	if (thousands < hundreds && hundreds > tens && tens < ones) {
	// 		return 'M';
	// 	} else if (thousands > hundreds && hundreds < tens && tens > ones) {
	// 		return 'V';
	// 	} else {
	// 		return 'N';
	// 	}
	// } else {
	// 	return 'N';
	// }

	// return 'N';


void count_valid_mv_numbers(int a, int b) {
	// TODO(student): count the number of valid mountain ranges and valley
	// ranges in the range [a, b] and print out to console using the format
	// in Requirement 4 of the homework prompt

	int mountainCount = 0;
	int valleyCount = 0;

	for (int i = a; i < b + 1; ++i) {
		switch (classify_mv_range_type(i)) {
			case 'M':
				mountainCount += 1;
				break;
			case 'V':
				valleyCount += 1;
				break;
			case 'N':
				break;
		}
	}

	cout << "There are " << mountainCount << " mountain ranges and " << valleyCount << " valley ranges between " << a << " and " << b << "." << endl;
}