#include <iostream>


using namespace std;

string prime_number(int number) {
	if (number <= 2) {
		return "-1";
	}

	for (int i = 2; i < number / 2; i++) {
		if (number / i != 1 && number % i == 0) {
			return "No";
		}
	}
	return "Yes";
}


