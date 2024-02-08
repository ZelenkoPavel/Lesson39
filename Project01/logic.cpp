#include <iostream>


using namespace std;

bool is_prime_number1(int number) {
	if (number <= 2) {
		return false;
	}

	for (int divider = 2; divider < number; divider++) {
		if (number / divider != 1 && number % divider == 0) {
			return false;
		}
	}
	return true;
}


bool is_prime_number2(int number) {
	if (number <= 2) {
		return false;
	}

	for (int divider = 2; divider < number / 2; divider++) {
		if (number / divider != 1 && number % divider == 0) {
			return false;
		}
	}
	return true;
}