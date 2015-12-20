// использую условную операцию "?:"

#include <iostream>

int main(){
	using namespace std;
	int a, b;
	cout << "Введите два числа: \n";
	cin >> a >> b;
	cout << "Большее из " << a << " и " << b;
	int c = a > b ? a : b; // c = a если a > b, иначе c = b
	cout << " - " << c << endl;
	return 0;
}

