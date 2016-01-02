// функция с двумя аргументами

#include <iostream>

using namespace std;

void n_chars(char, int);

int main(){
	int times;
	char ch;

	cout << "Введите символ: ";
	cin >> ch;

	while(ch != 'q'){
		cout << "Введите число: ";
		cin >> times;

		n_chars(ch, times);

		cout << "\nВведите другой символ или нажмите q для выхода: ";
		cin >> ch;
	}
	cout << "Значение переменной times равно " << times << ".\n";
	cout << "Готово\n";

	return 0;
}

void n_chars(char c, int n){
	while (n-- > 0)
		cout << c;
}

