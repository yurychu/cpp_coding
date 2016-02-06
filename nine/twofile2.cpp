// второй файл с переменными с внешним и вунтр связыванием

#include <iostream>
extern int tom;  // переменная tom определена в другом месте
static int dick = 10;  // перекрывает внешнюю переменную dick

int harry = 200;  // определение внешней переменной без конфликта

void remote_access(){
	using namespace std;
	cout << "remote_access() выводит следующие адреса: \n";
	cout << &tom << " = &tom, " << &dick << " = &dick, ";
	cout << &harry << " = &harry\n";
}
