#include <iostream>
#include "utils.cpp"

int add(int a, int b) {
	return (a + b);
}
int subtract(int a, int b) {
	return (a - b);
}
int multiply(int a, int b) {
	return (a * b);
}

int main() {
	int a, b;
	std::cout << "1st number: ";
	std::cin >> a;
	std::cout << "2nd number: ";
	std::cin >> b;
	std::cout << "The result of addition: " << add(a, b) << std::endl;
	std::cout << "The result of subtraction: " << subtract(a, b) << std::endl;
	std::cout << "The result of multiplication : " << multiply(a, b) << std::endl;
}