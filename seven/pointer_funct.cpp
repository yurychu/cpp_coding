// указатель на функции

#include <iostream>

double betsy_custom_func(int);
double pam_custom_func(int);

void show_time_work(int lines_of_code, double (*pointer_func)(int));

int main(){
	using namespace std;
	int code_lines;
	cout << "Сколько строк кода требуется написать? ";
	cin >> code_lines;
	cout << "Вот оценка Бетси: \n";
	show_time_work(code_lines, betsy_custom_func);

	cout << "Вот оценка Памелы: \n";
	show_time_work(code_lines, pam_custom_func);

	return 0;
}

double betsy_custom_func(int lines){
	return 0.05 * lines;
}

double pam_custom_func(int lines){
	return 0.03 * lines + 0.0004 * lines * lines;
}

void show_time_work(int code_lines, double (*pointer_func)(int)){
	using namespace std;
	cout << "Для написания " << code_lines << " строк, потребуется: ";
	cout << (*pointer_func)(code_lines) << " часов\n";
}

