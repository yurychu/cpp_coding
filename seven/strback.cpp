// функция, возвращающая указатель на строку

#include <iostream>

char *buildstr(char c, int n);

int main(){
	using namespace std;
	int times;
	char ch;

	cout << "Введите символ: ";
	cin >> ch;

	cout << "Введите число: ";
	cin >> times;

	char *ps = buildstr(ch, times);
	cout << ps << endl;
	delete [] ps; // освобождаем память

	ps = buildstr('+', 20); // повторно используем указатель
	cout << ps << "-done-" << ps << endl;
	delete [] ps;

	return 0;
}

//эта функция строит строку из n символов с
char * buildstr(char c, int n){
	char *pstr = new char[n + 1];
	pstr[n] = '\0'; // в последний элемент - ограничиваем строку
	while (n-- > 0)
		pstr[n] = c;
	return pstr;
}

