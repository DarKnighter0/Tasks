#include <iostream>
#include <string>

int main (){

	const int number = 54321;
	
	std::string text = std::to_string(number);
	
	std::cout << text << std::endl;
	
	return 0;
}
