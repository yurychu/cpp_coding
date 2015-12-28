// программа, управляемая из меню

#include <iostream>

int main(){
	using namespace std;
	
	char val;
	
	cout << "Пожалуйста, введит одно из следующих значений: \n"
			"c) хищник\tp) пианист\nt) дерево\tg) игра\n";
	cin >> val;

	bool around = true;

	while(around){	
		switch(val){
			case 'c': cout << "Лев - это хищник\n";
						around = false;
						break;
			case 'p': cout << "Моцарт - пианист\n";
						around = false;
						break;
			case 't': cout << "Клен - это дерево\n";
						around = false;
						break;
			case 'g': cout << "Wow - это игра!\n";
						around = false;
						break;
			default:
				cout << "Пожалуйста, введите c, p, t или g: ";
				cin >> val;
		}
	}
	return 0;
}

