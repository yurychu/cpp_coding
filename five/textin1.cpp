//чтение символов в цикле while

#include <iostream>

int main(){
	using namespace std;
	char ch;
	int count = 0; //будем использовать базовый ввод

	cout << "Вводите символы; Для выхода введите #: \n";
	cin.get(ch); //получить символ
	while (ch != '#'){
		cout << ch;
		++count;
		cin.get(ch);
	}
	cout << endl << count << " символов прочитано\n";

	return 0;
}

