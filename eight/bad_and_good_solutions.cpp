// плохие и хорошие реализации использования ссылочных переменных

#include <iostream>
#include <string>

using namespace std;

string version_one(const string & s1, const string & s2);
const string & version_two(string & s1, const string & s2); // побочки будут
const string & version_three(string & s1, const string & s2); // неудачное решение

int main(){
	string input;
	string copy;
	string result;

	cout << "Введите строку: ";
	getline(cin, input);
	copy = input;
	cout << "Вы ввели строку: " << input << endl;
	result = version_one(input, "***");
	cout << "Измененная строка: " << result << endl;
	cout << "Исходная строка: " << input << endl;

	result = version_two(input, "###");
	cout << "Измененная строка: " << result << endl;
	cout << "Исходная строка: " << input << endl;
	
	cout << "Восстановление исходной строки.\n";
	input = copy;
	result = version_three(input, "@@@");
	cout << "Измененная строка: " << result << endl;
	cout << "Исходная строка: " << input << endl;

	return 0;
}


string version_one(const string & s1, const string & s2){
	string temp;
	temp = s2 + s1 + s2;
	return temp;
}

// побочки будут
const string & version_two(string & s1, const string & s2){
	s1 = s2 + s1 + s2;
	// возвращаем ссылочный параметр, переданный функции
	return s1;
}

// неудачное решение
const string & version_three(string & s1, const string & s2){
	string temp;
	temp = s2 + s1 + s2;
	// возврат ссылки на локальную переменную ненадежен
	return temp;
}

