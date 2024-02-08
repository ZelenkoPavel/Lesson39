#include <iostream>

using namespace std;

string prime_number(int);

int main() {

	int number; 

	cout << "Input number: ";
	cin >> number;


	cout << "Result - " << prime_number(number)  << endl;

	return 0;
}