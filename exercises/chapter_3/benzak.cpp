//переводит пройденное расстояние и израсходованое 
//количество бензина в расход

#include <iostream>
int main(){
	using namespace std;

	int km, benz;
	float rate;

	cout << "Введите количество километров: ";
	cin >> km;
	cout << "Введите количество потраченных литров бензина: ";
	cin >> benz;

	rate = float(benz) / float(km);
	cout << "Вы ехали с расходом: " << rate << "литров на 1 километр" << endl;

	return 0;
}

