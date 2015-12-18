//запрашивает два целых числа, а потом выдает сумму всех целы между ними

#include <iostream>

int main(){
	using namespace std;
	int a, b;
	cout << "Введите начальное целое число: ";
	cin >> a;
	cout << "Введите конечное целое число: ";
	cin >> b;
	
	int sum = 0;
	for (a; a <= b; a++){
		sum += a;
	}
	cout << "Сумма целых чисел, между вашими двумя равна: " << sum << endl;

	return 0;
}

