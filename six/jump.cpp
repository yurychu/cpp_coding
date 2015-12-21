// continue и break

#include <iostream>
const int ArSize = 80;

int main(){
	using namespace std;
	char line[ArSize];
	int spaces = 0;
	cout << "Введите строку текста: \n";
	cin.get(line, ArSize);
	cout << "Полная строка:\n" << line << endl;
	cout << "Строка до первой точки: \n";
	for (int i = 0; line[i] != '\0'; i++){
		cout << line[i];
		if (line[i] == '.')
			break;
		if (line[i] != ' ')
			continue;
		spaces++;
	}
	cout << "\n" << spaces << " пробел(ов)\n";
	cout << "Готов.\n";

	return 0;
}

