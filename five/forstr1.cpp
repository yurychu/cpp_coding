//юзаем for в строке

#include <iostream>
#include <cstring>

int main(){
	using namespace std;
	cout << "Введите слово: ";
	string word;
	cin >> word;
	//теперь попробуем отобразить символы строки в обратном порядке
	for (int i = word.size() - 1; i >= 0; i--)
		cout << word[i];
	cout << "\nГотово.\n";

	return 0;
}

