// сравнение ссылочной переменной с указателями

#include <iostream>

int main(){
	using namespace std;

	int rats = 101;
	int & rodents = rats;

	cout << "rats = " << rats << endl;
	cout << "rodents = " << rodents << endl;

	cout << "адрес rodents = " << &rodents << endl;

	int bunnies = 50;
	rodents = bunnies; // можно ли изменить ссылку

	cout << "bunnies = " << bunnies << endl;
	cout << "rats = " << rats << endl;
	cout << "rodents = " << rodents << endl;

	cout << "адрес bunnies = " << &bunnies << endl;
	cout << "адрес rodents = " << &rodents << endl;

	return 0;
}

