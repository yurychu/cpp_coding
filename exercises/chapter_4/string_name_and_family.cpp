//используем объекты строк

#include <iostream>
#include <cstring>

int main(){
	using namespace std;

	string firstname;
	string lastname;
	
	cout << "Введите имя: ";
	getline(cin, firstname);

	cout << "Введите фамилию: ";
	getline(cin, lastname);

	cout << "Введенная информация: "
	<< lastname << ", "
	<< firstname << endl;

	return 0;
}

