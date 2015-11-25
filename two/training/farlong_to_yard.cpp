#include <iostream>

int main(){
	using namespace std;

	int farlong;
	cout << "Введите расстояние в фарлонгах: ";
	cin >> farlong;

	int yards = farlong * 220;
	cout <<  "Ваше расстояние равно " << yards << " ярдам" << endl;	

	return 0;
}

