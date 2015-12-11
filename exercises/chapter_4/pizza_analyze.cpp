//служба анализа пиццы используем new и указатель на структуру

#include <iostream>

struct informer{
	char company[30];
	float diameter;
	int weight;
};

int main(){
	using namespace std;

	informer *p_informer = new informer;
	
	cout << "Введите данные по заказу пиццы.\n";
	cout << "Введите диаметр пиццы: ";
	(cin >> p_informer->diameter).get();

	cout << "Название компании:";
	cin.getline(p_informer->company, 30);

	cout << "Вес: ";
	(cin >> p_informer->weight).get();

	cout << "Получили следующие данные: " << endl
	<< "Компания: " << p_informer->company << endl
	<< "Диаметр: " << p_informer->diameter << endl
	<< "Вес: " << p_informer->weight << endl;

	return 0;
}

