//использует структуру для ввода коллекции автомобилей

#include <iostream>

struct Automobile{
	char made_by[30];
	int made_year;
};

int main(){
	using namespace std;

	cout << "Введите сколько автомобилей вы хотите добавить: ";
	int items;
	cin >> items;

	Automobile *models[items]; //в дальнейшем надо разобраться делают так или нет

	for (int i = 0; i < items; i++){
		models[i] = new Automobile; // только при выносе new сюда получилось
		cout << "Введите данные для автомобиля #" << i + 1 << endl;
		cout << "Введите производителя: ";
		cin >> models[i] -> made_by;//потому, что тут оператор -> не хотел юзаться
		cout << "Введите год выпуска: ";
		cin >> models[i] -> made_year;
	}

	for (int i = 0; i < items; i++){
		cout << "Вы ввели: для автомобиля " << i+1 << endl;
		cout << models[i] -> made_by << endl;
		cout << models[i] -> made_year << endl;
	}

	return 0;
}

