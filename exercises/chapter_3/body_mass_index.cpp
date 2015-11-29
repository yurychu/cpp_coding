//считает индекс массы тела
#include <iostream>
int main(){
	using namespace std;
	int height, mass;

	cout << "Введите свой рост в сантиметрах: ";
	cin >> height;
	cout << "Введите свой вес в килограммах: ";
	cin >> mass;

	cout << "Вы ввели: " << height << " и " << mass;
	
	float height_in_meters = float (height) / 100;

	float exp_height = (height_in_meters * height_in_meters);
	cout << "квадрат роста = " << exp_height << endl;
	float index = mass / exp_height;

	cout << "Ваш индекс = " << index << endl;

	return 0;
}

