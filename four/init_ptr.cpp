//инициализация указателя

#include <iostream>

int main(){
	using namespace std;
	
	int higgens = 5;
	int *pt = &higgens;

	cout << "Значение higgens = " << higgens
		<< ", адрес higgens = " << &higgens << endl;

	cout << "Значение *pt = " << *pt
		<< ", значение pt = " << pt << endl;

	return 0;
}

