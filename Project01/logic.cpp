#include <iostream>


using namespace std;

string is_prime_number1(int number) {
	if (number <= 2) {
		return "-1";
	}

	for (int divider = 2; divider < number; divider++) {
		if (number / divider != 1 && number % divider == 0) {
			return "No";
		}
	}
	return "Yes";
}


string is_prime_number2(int number) {
	if (number <= 2) {
		return "-1";
	}

	for (int divider = 2; divider < number / 2; divider++) {
		if (number / divider != 1 && number % divider == 0) {
			return "No";
		}
	}
	return "Yes";
}