// находим адрес переменной

#include <iostream>

int main(){
	using namespace std;
	int donuts = 6;
	double cups = 4.5;
	cout << "значения donuts = " << donuts;
	cout << ", а адрес = " << &donuts << endl;

	cout << "Значение cups = " << cups;
	cout << ", а адрес = " << &cups << endl;

	return 0;
}

