//используем new со структурой
#include <iostream>
struct inflatable {
	char name[20];
	float volume;
	double price;
};

int main(){
	using namespace std;
	inflatable *ps = new inflatable; //выделили память для структуры
	cout << "Укажите имя для элемента inflatable: ";
	cin.get(ps -> name, 20);// метод 1 для доступа к членам

	cout << "Укажите объем в кубических футах: ";
	cin >> (*ps).volume; // метод 2 для доступа к членам

	cout << "Введите цену: $";
	cin >> ps -> price;

	cout << "Имя: " << (*ps).name << endl; // метод 2
	cout << "Объем: " << ps -> volume << " cubic feet\n";// метод 1
	cout << "Цена: $" << ps -> price << endl; 
	
	delete ps; //освобождаем память, используемую под структуру
	
	return 0;
}

