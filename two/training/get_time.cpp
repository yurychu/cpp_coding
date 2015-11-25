#include <iostream>

void show_time(int, int);
int main(){
	using namespace std;

	int hour;
	cout << "Введите час: ";
	cin >> hour;

	int minutes;
	cout << "Введите минуты: ";
	cin >> minutes;

	show_time(hour, minutes);
	return 0;
}

void show_time(int hour, int minutes){
	using namespace std;
	cout << "Время: " << hour << ":" << minutes << endl;
}

