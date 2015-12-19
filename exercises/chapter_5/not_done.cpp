//читает по одному слову и считает их

#include <iostream>
#include <cstring>

int main(){
	using namespace std;

	char words[50];
	char ch;
	int count = 0;
	char done_word[] = "done";
	do {
		cout << "Введите слова, для завершения введите done" << endl;
		cin >> ch;
		for (int i = 0; ch != '\0'; i++){
			words[i] = ch;
			cin >> ch;
		}
		count++;
	} while (strcmp(words, done_word));
	cout << "Вы ввели " << count << "слов(а)" << endl;
	return 0;
}
// Не знаю как решить. Попробую позже

