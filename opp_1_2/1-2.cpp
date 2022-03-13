#include <iostream>

unsigned int add(unsigned int a, unsigned int b) {
	unsigned int result = a + b;
	return result;
}

int main(void) {
	unsigned int num1 = 0, num2 = 0;
	std::cout << "Enter Two Numbers: ";
	std::cin >> num1 >> num2;
	std::cout << add(num1, num2);
	return 0;
}