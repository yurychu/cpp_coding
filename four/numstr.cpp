//строковый ввод после числового
#include <iostream>

int main(){
	using namespace std;
	cout << "В каком году построен ваш дом? \n";
	int year;
	(cin >> year).get();
	cout << "По какому адресу он расположен? \n";
	char address[80];
	cin.getline(address, 80);
	cout << "Год постройки: " << year << endl;
	cout << "Адрес: " << address << endl;
	cout << "Готово! \n";
	return 0;
}

