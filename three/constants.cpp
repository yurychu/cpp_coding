#include <iostream>

int main(){
	const int MONTHS = 12;
	std::cout << "константа количества месяцев в году " << MONTHS << std::endl;

	const int HELLO;
	std::cout << HELLO << std::endl;
	//HELLO = 20;

	//MONTHS = 10;

	return 0;
}

