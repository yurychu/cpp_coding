//расход по европейски в американский

#include <iostream>
int main(){
	using namespace std;

	float rate_euro, rate_american;

	cout << "Введите расход в литрах на 100 км: ";
	cin >> rate_euro;

	float gallon = rate_euro / 3.875;

	rate_american = 62.13 / gallon;

	cout << "Ваш расход: " << rate_american << " миль на галлон" << endl;

	return 0;
}

