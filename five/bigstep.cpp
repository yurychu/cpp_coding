//использую for c величиной шага, который указал пользователь

#include <iostream>

int main(){
	using namespace std;

	cout << "Введите целое число, которым будем шагать в цикле: ";
	int by;
	cin >> by;
	cout << "Шагаем по " << by << ":\n";
	for (int i = 0; i < 100; i = i + by)
		cout << i << endl;
	return 0;
}

