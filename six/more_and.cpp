//операция && и массив указателей на строки

#include <iostream>

const char *qualify[4] = {
	"гонки на 10.000 метров\n",
	"перетягивание каната\n",
	"состязания мастеров каноэ\n",
	"фестиваля по бросанию пирожков\n"
};

int main(){
	using namespace std;
	int age;
	cout << "Введите свой возраст в годах: ";
	cin >> age;
	int index;
	if (age > 17 && age < 35)
		index = 0;
	else if (age >= 35 && age < 50)
		index = 1;
	else if (age >= 50 && age < 65)
		index = 2;
	else
		index = 3;
	cout << "Вы квалифицированы для " << qualify[index];

	return 0;
}

