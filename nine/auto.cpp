// области видидмости автоматических переменных

#include <iostream>

void oil(int x);

int main(){
	using namespace std;
	
	int texas = 21;
	int year = 1999;

	cout << "В main(), texas = " << texas << ", &texas = ";
	cout << &texas << endl;
	cout << "В main(), year = " << year << ", &year = ";
	cout << &year << endl;

	oil(texas);

	cout << "В main(), texas = " << texas << ", &texas = ";
	cout << &texas << endl;
	cout << "В main(), year = " << year << ", &year = ";
	cout << &year << endl;

	return 0;
}

void oil(int x){
	using namespace std;
	int texas = 5;

	cout << "В oil(), texas = " << texas << ", &texas = ";
	cout << &texas << endl;
	cout << "В oil(), x = " << x << ", &x = ";
	cout << &x << endl;
	{
		int texas = 113;
		cout << "В блоке, texas = " << texas;
		cout << ", &texas = " << &texas << endl;
		cout << "В блоке, x = " << x << ", &x = ";
		cout << &x << endl;
	}
	cout << "После выхода из блока texas = " << texas;
	cout << ", &texas = " << &texas << endl;
}
