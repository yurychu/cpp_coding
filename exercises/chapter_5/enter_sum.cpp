//просит ввести число, после чего выдает накопленную сумму, при вводе 0 выходит

#include <iostream>

int main(){
	using namespace std;

	int x;
	int sum = 0;
	do {
		cout << "Введите целое число: ";
		cin >> x;
		sum += x;
		cout << "Сумма, введенных вами чисел равна: " << sum << endl;
	} while (x != 0);

	return 0;
}

