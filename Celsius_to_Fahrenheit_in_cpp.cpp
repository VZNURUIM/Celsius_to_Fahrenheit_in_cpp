/*Create a program that converts units such as temperature (Celsius to Fahrenheit)*/

#include <iostream>

using namespace std;

double celsius(double a) {
	cout << "Enter the temperature in Celsius : ";
	cin >> a;

	return a * 1.8 + 32.0;
}

int main() {
	double num{};
	cout << "Fahrenheit: " << celsius(num);
	return 0;
}
