//смотрим шестнадцатеричные и восьмеричные константы
#include <iostream>

int main(){
	using namespace std;

	int chest = 42; //десятичная
	int waist = 42; //шестнацатеричная
	int inseam = 42; //восьмеричная

	cout << "Друг смотри какие фигуры!\n";
	cout << "chest = " << chest << "\n";
	cout << hex; //изменим основание системы счисления 16
	cout << "waist = " << waist << "\n";
	cout << oct; //8
	cout << "inseam = " << inseam << "\n";

	return 0;
}

