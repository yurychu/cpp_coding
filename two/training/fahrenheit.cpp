#include <iostream>

double convert_to_fahr(int);
int main(){
	std::cout << "Введите температуру в градусах цельсия: ";
	int celc;
	std::cin >> celc;
	
	double fahrenheit = convert_to_fahr(celc);
	std::cout << celc << " цельсий, переведенных в фаренгейты равны "
	<< fahrenheit << std::endl;
	
	return 0;
}

double convert_to_fahr(int c){
	return 1.8 * c + 32;
}

