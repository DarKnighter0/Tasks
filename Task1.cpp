#include <iostream>

int main() {
	const int a = 2;
	const int b = 4;
	
	int sum = 0;
	
	for (int i = a; i <= b; i++) {
		if(i % 2 == 0) {
			sum += i;
		}
	}
	
	std::cout << sum << std::endl;
	
	return 0;
}
