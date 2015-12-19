//перчатает звездочки и точки соответственно количеству строк

#include <iostream>

int main(){
	using namespace std;

	int items;
	cout << "Введите количество строк: ";
	cin >> items;

	for (int s = 1, d = items; s <= items; s++, --d){
		for (int i = 1; i < d; i++)
			cout << ".";
		for (int i = 0; i < s; i++)
			cout << "*";
		cout << endl;
	}
	return 0;
}

