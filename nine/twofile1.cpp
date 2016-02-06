// переменные с внешним и внутренним связыванием

#include <iostream>

int tom = 3;  // внешняя
int dick = 30;  // внешняя

static int harry = 300;  // статическая, внутреннее связываение

// прототип
void remote_access();

int main(){
	using namespace std;
	cout << "main() выводит следующие адреса:\n";
	cout << &tom << " = &tom, " << &dick << " = &dick, ";
	cout << &harry << " = &harry\n";
	remote_access();

	return 0;
}
