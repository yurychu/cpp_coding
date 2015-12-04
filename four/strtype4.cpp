// ввод строки с пробелами
#include <iostream>
#include <cstring>
int main(){
	using namespace std;

	char charr[20];
	string str;

	cout << "Длина строки charr перед вводом: "
	<< strlen(charr) << endl;

	cout << "Длина строки str перед вводом: "
	<< str.size() << endl;

	cout << "Введите строку текста: \n";
	cin.getline(charr, 20);
	cout << "Вы ввели: " << charr << endl;

	cout << "Введите другую строку текста: \n";
	getline(cin, str);
	cout << "Вы ввели: " << str << endl;
	cout << "Длина строки charr после ввода: "
	<< strlen(charr) << endl;

	cout << "Длина строки str после ввода: "
	<< str.size() << endl;

	return 0;
}

