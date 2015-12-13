//обращаем порядок элементов массива

#include <iostream>
#include <cstring>

int main(){
	using namespace std;
	cout << "Введите слово: ";
	string word;
	cin >> word;
	//делаем физическую модификацию string'a
	char temp;
	int i, j;

	for (j = 0, i = word.size() - 1; j < i; --i, ++j){
		temp = word[i];
		word[i] = word[j];
		word[j] = temp;
	}
	cout << word << "\nГотово.\n";

	return 0;
}

