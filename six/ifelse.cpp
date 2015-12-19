//шифрует вводимы слова, использование if else

#include <iostream>

int main(){
	using namespace std;
	char ch;
	cout << "Печатайте, я буду повторять. \n";
	cin.get(ch);
	while (ch != '.'){
		if (ch == '\n')
			cout << ch;
		else
			cout << ++ch; //ch + 1; для вывода численых значений;
		cin.get(ch);
	}
	cout << "Извините за легкий беспорядок!\n";
	return 0;
}

