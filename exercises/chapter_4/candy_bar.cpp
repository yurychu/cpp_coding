//создаю структуру для коробки конфет

#include <iostream>
struct CandyBar {
	char name[20];
	float weight;
	int calory;
};

int main(){
	using namespace std;

	CandyBar *p_candy_bars = new CandyBar [3];
	
	p_candy_bars = {
		{"Mocha Munch", 2.3, 350},
		{"Super Candy" , 3.0, 400},
		{"Mega Sugar", 3.5, 500}
	};
/*
	cout << "Тут у нас есть: \n"
	<< "Название: " << p_candy_bars->name << ". "
	<< "Вес: " << p_candy_bars->weight << ". "
	<< "Калории: " << p_candy_bars->calory << ". "
	<< endl;

	cout << "Название: " << (p_candy_bars + 1)->name << ". "
    << "Вес: " << (p_candy_bars + 1)->weight << ". "
    << "Калории: " << (p_candy_bars + 1)->calory << ". "
    << endl; 

	cout << "Название: " << (p_candy_bars[2]).name << ". "
    << "Вес: " << (p_candy_bars[2]).weight << ". "
    << "Калории: " << (p_candy_bars[2]).calory << ". "
    << endl; 
*/
	return 0;
}
//не знаю, оставить до лучших времен и реализовать
//не комплируется с варнингом
