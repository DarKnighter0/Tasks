#include <iostream>

int main() {
	const int number = -25;
	
	if (number > 0) {
		std::cout << "+" << std::endl;
	} else if (number < 0) {
		std::cout << "-" << std::endl;
	} else {
		std::cout << "0" << std::endl;
	}
	
	return 0;
}
