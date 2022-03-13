#include <iostream>

int main(void) {
	char name[256];
	int num = 0;
	char major[256];

	std::cout << "이름: ";
	std::cin >> name;
	std::cout << "학번: ";
	std::cin >> num;
	std::cout << "전공: ";
	std::cin >> major;
	return 0;
}