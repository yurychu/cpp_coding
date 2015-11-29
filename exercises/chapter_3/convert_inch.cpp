// введи рост в целых дюймах и получи в ответ футах и дюймах
#include <iostream>
int main(){
	using namespace std;

	const int INCH_PER_FT = 12; //фут это 12 дюймов
	
	cout << "Введите значение в дюймах: ";
	int inch;
	cin >> inch;
	cout << "Ваш рост: " << inch / INCH_PER_FT << " футов, " << inch % INCH_PER_FT << " дюймов." << endl;

	return 0;
}

