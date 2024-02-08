#include <iostream>
#include <time.h>

using namespace std;

string is_prime_number1(int);
string is_prime_number2(int);

int main() {

	int number; 

	cout << "Input number: ";
    cin >> number;
	float start_1 = time(NULL);

	cout << "Result 1 - " << is_prime_number1(number)  << endl;

	float end_1 = time(NULL);

	cout << "Time - " << end_1 - start_1 << endl;




	float start_2 = time(NULL);

	cout << "Result 2 - " << is_prime_number2(number) << endl;

	float end_2 = time(NULL);

	cout << "Time - " << end_2 - start_2 << endl;

	return 0;
}