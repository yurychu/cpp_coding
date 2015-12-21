// использование enum с условным оператором
#include <iostream>
//создадим именованные константы 0-6
enum {red, orange, yellow, green, blue, violet, indigo};

int main(){
	using namespace std;
	cout << "Введите код цвета (0-6): ";
	int code;
	cin >> code;
	while (code >= red && code <= indigo){
		switch (code){
			case red	: cout << "Ее губы были красными.\n"; break;
			case orange	: cout << "Ее волосы были рыжими.\n"; break;
			case yellow	: cout << "Ее туфли были желтыми.\n"; break;
			case green	: cout << "Ее глаза были зелеными.\n"; break;
			case blue	: cout << "Ее платье было голубым.\n"; break;
			case violet	: cout << "Ее маникюр был филетовым.\n"; break;
			case indigo	: cout << "Ее настроение было цвета индиго.\n"; break;
		}
		cout << "Введите код цвета (0-6): ";
		cin >> code;
	}
	cout << "Пока!" << endl;

	return 0;
}

