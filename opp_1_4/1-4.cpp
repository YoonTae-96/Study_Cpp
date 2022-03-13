#include <iostream>

void expo_2(int* x) {
	*x = (*x) * (*x);
}

void expo_3(int* y) {
	*y = (*y) * (*y) * (*y);
}

int main(void) {
	int num = 0, tmp = 0;
	std::cout << "Number :";
	std::cin >> num;
	tmp = num;


	std::cout << "Number :" << num << std::endl;
	expo_2(&num);
	std::cout << "Number^2 :" << num << std::endl;
	expo_3(&tmp);
	std::cout << "Number^3 :" << tmp << std::endl;
	return 0;
}