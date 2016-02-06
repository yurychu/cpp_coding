// использование статической локальной переменной

#include <iostream>

// константы 
const int ArSize = 10;

// прототип
void strcount(const char * str);

int main(){
	using namespace std;
	char input[ArSize];
	char next;
	cout << "Введите строку: \n";
	cin.get(input, ArSize);
	
	while (cin){
		cin.get(next);
		while (next != '\n')
			cin.get(next);
		strcount(input);
		cout << "Введите следующую строку (или пустую строку для завершения: \n";
		cin.get(input, ArSize);
	}

	cout << "Всего наилучшего!\n";
	return 0;
}

void strcount(const char * str){
	using namespace std;
	static int total = 0;
	int count = 0;
	cout << " \"" << str << " \" содержит ";

	while(*str++)
		count++;
	total += count;
	cout << count << " символов\n";
	cout << "Всего символов = " << total << "\n";
}
