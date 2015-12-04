//чтенеие более одной строки
//
#include <iostream>
int main(){
	using namespace std;
	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];
	cout << "ВВедите свое имя: \n";
	cin.getline(name, ArSize);
	cout << "Введите любимый десерт: \n";
	cin.getline(dessert, ArSize);
	cout << "У меня есть вкусный " << dessert;
	cout << " для вас, " << name << ".\n";

	return 0;
}

