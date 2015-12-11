//спрашивает фамилию и имя и генерирует 3 строку

#include <iostream>
#include <cstring>

int main(){
	using namespace std;
	
	char firstname[20];
	char lastname[20];

	cout << "Введите имя: ";
	cin.getline(firstname, 20);
	
	cout << "Введите фамилию: ";
	cin.getline(lastname, 20);

	cout << "Здесь информация из введенных вами строк: "
	<< lastname << ", " 
	<< firstname
	<< endl;

	return 0;
}

