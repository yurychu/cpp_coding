//переводит количество секунд в дни часы минуты секунды
#include <iostream>

int main(){
	const int hour_in_day = 24;
	const int min_in_hour = 60;
	const int sec_in_min = 60;

	using namespace std;

	cout << "Введите значение в секундах: ";
	int seconds;	
	cin >> seconds;
	int days = seconds / (hour_in_day * min_in_hour * sec_in_min);
	seconds = seconds - (days * hour_in_day * min_in_hour * sec_in_min);
	int hours = seconds / (min_in_hour * sec_in_min);
	seconds = seconds - (hours * min_in_hour * sec_in_min);
	int minutes = seconds / sec_in_min;
	seconds = seconds - minutes * sec_in_min;
	
	cout 
	<< days << " дней, "
	<< hours << " часов, "
	<< minutes << " минут, "
	<< seconds << " секунд! " << endl;

	return 0;
}

