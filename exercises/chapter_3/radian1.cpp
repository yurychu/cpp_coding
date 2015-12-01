//широта в десятичный формат
#include <iostream>
int main(){
	using namespace std;
	const int sec_in_min = 60;
	const int min_in_grad = 60;

	int grad, min, sec;

	cout << "Введите значение градусах, минутах и секундах: " << endl;
	cout << "Сначала введите градусы: ";
	cin >> grad;
	cout << "Терь минуты: ";
	cin >> min;
	cout << "И секунды: ";
	cin >> sec;

	float sec_and_min = min * sec_in_min + sec;

	float sum = grad + sec_and_min / (60 * 60);

	cout << "В десятичной системе это будет: " << sum << endl;

	return 0; 
}

