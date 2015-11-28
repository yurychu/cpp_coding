//типы с плавающей точкой
#include <iostream>

int main(){
	using namespace std;
	cout.setf(ios_base::fixed, ios_base::floatfield);//фиксированная точка
	float tub = 10.0 / 3.0;//на 6 разрядов
	double mint = 10.0 / 3.0;//на 15 разрядов
	const float million = 1.0e6;

	cout << "tub = " << tub;
	cout << ", a million tubs = " << million * tub;
	cout << ", \nand ten million tubs = ";
	cout << 10 * million * tub << endl;

	cout << "mint = " << mint << " and a million mints = ";
	cout << million * mint << endl;
	return 0;
}

