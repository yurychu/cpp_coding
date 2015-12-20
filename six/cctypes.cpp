// используем библиотеку cctypes

#include <iostream>
#include <cctype>

int main(){
	using namespace std;
	cout << "Введите текст для анализа. Для окончания ввода введите @. \n";
	char ch;
	int whitespace = 0;
	int digits = 0;
	int chars = 0;
	int punct = 0;
	int others = 0;
	
	cin.get(ch);

	while (ch != '@'){
		if (isalpha(ch))
			++chars;
		else if (isspace(ch))
			++whitespace;
		else if (isdigit(ch))
			++digits;
		else if (ispunct(ch))
			++punct;
		else
			++others;
		cin.get(ch); //получаем следующий символ
	}
	cout << chars << " букв, "
	<< whitespace << " пробелов, "
	<< digits << " цифр, "
	<< punct << " знаков препинания, "
	<< others << " прочих.\n";

	return 0;
}

