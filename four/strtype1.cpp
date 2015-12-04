//используем класс string
#include <iostream>
#include <string>
int main(){
	using namespace std;
	char charr1[20]; //пустой массив
	char charr2[20] = "ягуар"; //инициализированный массив
	string str1; //пустой объект строки
	string str2 = "пантера"; //инициализированный объект строки

	cout << "Введите животное из семейства кошачьих: ";
	cin >> charr1;
	cout << "Введите другое животное из семейства кошачьих: ";
	cin >> str1;
	cout << "Вот некоторые животные из семейства кошачьих: \n";
	cout << charr1 << " " << charr2 << " "
		<< str1 << " " << str2 << endl;
	cout << "Вторая буква в слове " << charr2 << " - "
		<< charr2[1] << endl;
	cout << "Вторая буква в слове " << str2 << " - "
		<<  str2[1] << endl;

	return 0;
}

