// функция, использующая строку как аргумент

#include <iostream>

int c_in_str(const char *str, char ch);

int main(){
	using namespace std;
	char mmm[15] = "minimum"; // строка в массиве

	char *wail = "ululate"; // ожидает указателя на строку

	int ms  = c_in_str(mmm, 'm');
	int us = c_in_str(wail, 'u');
	
	cout << ms << " m символов в " << mmm << endl;
	cout << us << " u символов в " << wail << endl;

	return 0;
}

// считает количество символов ch в строке str
int c_in_str(const char *str, char ch){
	int count = 0;
	while (*str){ // завершить, когда *str равно '\0'
		if (*str == ch)
			count++;
		str++; // перемещаем указатель на следующий символ
	}
	return count;
}

