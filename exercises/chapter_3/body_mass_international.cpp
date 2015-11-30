//Новая версия программы с выполнением условий как в задании
#include <iostream>
int main(){
	using namespace std;
	const int Inch_per_ft = 12;
	const float Meter_in_inch = 0.0254;
	const float Pound_in_kg = 2.2;
	
	int pound, ft, inch;

	cout << "Введите значение роста в футах: ";
	cin >> ft;

	cout << "Введите оставшуюся часть в дюймах: ";
	cin >> inch;

	cout << "Введите ваш вес в фунтах: ";
	cin >> pound;

	int height = ft * Inch_per_ft + inch;
	float mass = pound / Pound_in_kg;
	float height_meter = height * Meter_in_inch;
	float mass_index = mass / (height_meter * height_meter);

	cout << "Ваш индекс массы = " << mass_index << endl;
	return 0;
}

