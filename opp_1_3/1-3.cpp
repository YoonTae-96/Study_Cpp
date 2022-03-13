#include <iostream>

int main(void) {
	int num1 = 0, num2 = 0;

	std::cout << "Enter Two Numbers: ";
	std::cin >> num1 >> num2;
	std::cout << "num1 + num2: " << num1 + num2 << std::endl;
	std::cout << "num1 - num2: " << num1 - num2 << std::endl;
	std::cout << "num1 * num2: " << num1 * num2 << std::endl;
	std::cout << "num1 / num2: " << float(num1) / float(num2) << std::endl;
	std::cout << "num1 % num2: " << num1 % num2 << std::endl;
	return 0;
}