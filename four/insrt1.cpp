//чтенеие более одной строки
//
#include <iostream>
int main(){
	using namespace std;
	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];
	cout << "ВВедите свое имя: \n";
	cin.get(name, ArSize).get();
	cout << "Введите любимый десерт: \n";
	cin.get(dessert, ArSize).get();
	cout << "У меня есть вкусный " << dessert;
	cout << " для вас, " << name << ".\n";

	return 0;
}

