// определени и использование ссылочной переменной

#include <iostream>

int main(){
	using namespace std;

	int rats = 101;
	int & rodents = rats;  // rodents является ссылкой

	cout << "rats = " << rats;
	cout << ", rodents = " << rodents << endl;

	rodents++;
	cout << "rats = " << rats;
	cout << ", rodents = " << rodents << endl;;

	cout << "адрес rats = " << &rats << endl;;
	cout << "адрес rodents = " << &rodents << endl;

	return 0;
}

