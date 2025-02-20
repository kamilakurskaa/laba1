#include <iostream>
#include "utils.cpp"

int add(int a, int b) {
	return (a + b);
}
int subtract(int a, int b) {
	return (a - b);
}

int main() {
	int a, b;
	std::cout << "1st number: ";
	std::cin >> a;
	std::cout << "2nd number: ";
	std::cin >> b;
	std::cout << "Addition:" << add(a, b) << std::endl;
	std::cout << "Subtraction:" << subtract(a, b) << std::endl;
}