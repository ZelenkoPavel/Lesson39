#include <iostream>
#include <ctime> // C++ 

using namespace std;

bool is_prime_number1(int);
bool is_prime_number2(int);

int main() {

	int number; 

	cout << "Input number: ";
    cin >> number;
	long start_time = time(NULL);

	cout << "Result 1 - " << (is_prime_number1(number) ? "Yes, it's prime number" : "No") << endl;

	long end_time = time(NULL);

	cout << "Time - " << (end_time - start_time) << " sec. " << endl;

	//2147483647


	start_time = time(NULL);

	cout << "Result 2 - " << (is_prime_number2(number) ? "Yes, it's prime number" : "No") << endl;

	end_time = time(NULL);

	cout << "Time - " << (end_time - start_time) << " sec. " << endl;


	return 0;
}