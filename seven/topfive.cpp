// функции работы с массисвом строк
#include <iostream>
#include <string>

using namespace std;

const int SIZE = 5;

void display_array_strings(const string all_strings[], int n);

int main(){
	string list[SIZE];
	cout << "Введите " << SIZE << " ваших любимых звезд: \n";

	for (int i = 0; i < SIZE; i++){
		cout << i + 1 << ": ";
		getline(cin, list[i]);
	}
	cout << "Ваш список: \n";
	display_array_strings(list, SIZE);

	return 0;
}
void display_array_strings(const string all_strings[], int n){
	for (int i = 0; i < n; i++)
		cout << i + 1 << ": " << all_strings[i] << endl;
}

