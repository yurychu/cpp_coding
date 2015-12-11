//запрашивает и отображает информацию
#include <iostream>
#include <cstring>

int main(){
	using namespace std;
	
	cout << "Введите ваше имя: ";
	string firstname;
	getline(cin, firstname);
	
	cout << "Введите вашу фамилию: ";
	string lastname;
	getline(cin, lastname);

	cout << "Какой у вас грейд: ";
	char grade;
	(cin >> grade).get();
	//grade = grade - 1;
	
	cout << "Сколько лет: ";
	int age;
	(cin >> age).get();

	cout << "Имя: " << lastname << ", " << firstname << endl;
	cout << "Грейд: " << grade << endl;
	cout << "И возраст: " << age << endl;

	return 0;
}

