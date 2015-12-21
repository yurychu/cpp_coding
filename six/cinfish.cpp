// прерывание ввода значением, отличным о числового

#include <iostream>
const int Max = 5;

int main(){
	using namespace std;
	double fish[Max];
	cout << "Пожалуйста, введите вес пойманных рыб.\n"
	<< "Можно ввести до " << Max
	<< " рыб < q - для завершения>\n";
	cout << "рыба #1: ";

	int i = 0;
	while (i < Max && cin >> fish[i]){  // тут ввод не числового значени вернет false
		if (++i < Max)
			cout << "рыба #" << i + 1 << ": ";
	}

	// вычислим среднее
	double total = 0.0;

	for (int j = 0; j < i; j++)
		total += fish[j];

	if (i == 0)
		cout << "Нет рыбы\n";
	else
		cout << total / i << " = средний вес "
		<< i << " рыб\n";
	cout << "Готово!\n";

	return 0;
}

