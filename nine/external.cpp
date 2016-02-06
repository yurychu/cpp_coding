// внешние переменные

#include <iostream>

using namespace std;

// внешнаяя переменная
double warming = 0.3;

// прототипы функций
void update(double dt);
void local();

int main(){
	cout << "Глобалоное потепление - " << warming << " градуса.\n";
	update(0.1); // вызов функции, изменяющий переменную warming
	cout << "Глобалоное потепление - " << warming << " градуса.\n";
	local(); // вызов функции с локальной переменной warming
	cout << "Глобалоное потепление - " << warming << " градуса.\n";

	return 0;
}

// изменяет глобальную переменную
void update(double dt){
	extern double warming;
	warming += dt;
	cout << "Изменение глобального потепления до " << warming;
	cout << " градуса\n";
}

// использует локальную переменную
void local(){
	double warming = 0.8; // новая переменная скрывает внешнюю
	cout << "Локальное потепление = " << warming << " градуса.\n";
	// доступ к глобальной переменной с помощью операции разрешения контекста
	cout << "Но глобальное потепление = " << ::warming;
	cout << " градуса.\n";
}
