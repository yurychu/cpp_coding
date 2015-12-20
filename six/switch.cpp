// оператор switch

#include <iostream>

using namespace std;

void showmenu();
void report();
void comfort();

int main(){
	showmenu();
	int choice;
	cin >> choice;
	while (choice != 5){
		switch (choice){
			case 1 : cout << "a - n\n"; break;
			case 2 : report(); break;
			case 3 : cout << "Босс каждый день!\n"; break;
			case 4 : comfort(); break;
			default : cout << "Ну это не выбор\n";
		}
		showmenu();
		cin >> choice;
	}
	cout << "Bye!\n";
	return 0;
}

void showmenu(){
	cout << "Пожалуйста введите 1, 2, 3, 4 или 5 \n"
			"1 - alarm 2 - report\n"
			"3 - alibi 4 - comfort\n"
			"5 - quit\n";
}

void report(){
	cout << "Это была отличная неделя в бизнесе!\n";
}

void comfort(){
	cout << "Реальный комфорт!\n";
}

