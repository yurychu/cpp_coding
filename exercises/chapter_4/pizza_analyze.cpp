//служба анализа пиццы

#include <iostream>

struct informer{
	char company[30];
	float diameter;
	int weight;
};

int main(){
	using namespace std;

	informer order;

	cout << "Введите данные по заказу пиццы.\n"
	"Название компании:";
	cin.getline(order.company, 30);

	cout << "Диаметр: ";
	(cin >> order.diameter).get();

	cout << "Вес: ";
	(cin >> order.weight).get();

	cout << "Получили следующие данные: " << endl
	<< "Компания: " << order.company << endl
	<< "Диаметр: " << order.diameter << endl
	<< "Вес: " << order.weight << endl;

	return 0;
}

