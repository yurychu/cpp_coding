//смотрим цикл do-while

#include <iostream>

int main(){
	using namespace std;

	int n;
	cout << "Угадайте мое любимое число в диапазоне 1-10\n";
	do {
		cin >> n;
	} while (n != 7);

	cout << "Да, 7 - мое любимое число!\n";

	return 0;
}

