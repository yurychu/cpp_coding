// составляю программу из трех файлов

#include <iostream>
#include "coordin.h"

using namespace std;

int main(){

	rect rplace;
	polar pplace;

	cout << "Введите значения x и y: ";
	while (cin >> rplace.x >> rplace.y){
		pplace = rect_to_polar(rplace);
		show_polar(pplace);
		cout << "Следующие два числа (для выхода введите q): ";
	}
	cout << "Всего наилучшего!";

	return 0;
}

