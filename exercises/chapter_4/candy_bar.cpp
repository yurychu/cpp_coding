//создаю структуру для коробки конфет

#include <iostream>
struct CandyBar {
	char name[20];
	float weight;
	int calory;
};

int main(){
	using namespace std;

	CandyBar bars[3] = {
		{"Mocha Munch", 2.3, 350},
		{"Super Candy" , 3.0, 400},
		{"Mega Sugar", 3.5, 500}
	};

	cout << "Тут у нас есть: \n"
	<< "Название: " << bars[0].name << ". "
	<< "Вес: " << bars[0].weight << ". "
	<< "Калории: " << bars[0].calory << ". "
	<< endl;

	cout << "Название: " << bars[1].name << ". "
    << "Вес: " << bars[1].weight << ". "
    << "Калории: " << bars[1].calory << ". "
    << endl; 

	cout << "Название: " << bars[2].name << ". "
    << "Вес: " << bars[2].weight << ". "
    << "Калории: " << bars[2].calory << ". "
    << endl; 

	return 0;
}

