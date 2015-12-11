//создаю структуру для коробки конфет

#include <iostream>
struct CandyBar {
	char name[20];
	float weight;
	int calory;
};

int main(){
	using namespace std;

	CandyBar snack = {
		"Mocha Munch",
		2.3,
		350
	};

	cout << "Тут у нас есть: \n"
	<< "Название: " << snack.name << ". "
	<< "Вес: " << snack.weight << ". "
	<< "Калории: " << snack.calory << ". "
	<< endl;

	return 0;
}

