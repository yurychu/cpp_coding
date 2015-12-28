//читает ввод и повторяет, прерывается при вводе числа или @
//преобразует каждую букву в противоположный регистр

#include <iostream>
#include <cctype>

int main(){
	using namespace std;

	char ch;
	while (cin.get(ch) && ch != '@' && !isdigit(ch)){
		if (islower(ch))
			ch = toupper(ch);
		else if(isupper(ch))
			ch = tolower(ch);

		cout << ch;
	}
	cout << "\nПрограмма завершена, вы ввели @ или число" << endl;

	return 0;
}

