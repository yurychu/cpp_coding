// числовая проверка в цикле

#include <iostream>

int main(){
	using namespace std;
	cout << "Введите начальное значение для обратного отсчета: ";
	int limit;
	cin >> limit;
	int i;
	for (i = limit; i; i--)//выйдем когда i станет 0
		cout << "i = " << i << "\n";
	cout << "Готово, теперь i = " << i << "\n";

	return 0;
}

