// логическая операция НЕ

#include <iostream>
#include <climits>

bool is_int(double);

int main(){
	using namespace std;
	double num;
	cout << "Эй, введи целочисленное значение! ... ";
	cin >> num;
	while (!is_int(num)){
		cout << "Мы вышли за пределы, попробуй снова!";
		cin >> num;
	}
	int val = int (num);
	cout << "Вы ввели целочисленное значение: " << val << ", спасибо, пока!\n";

	return 0;
}

bool is_int(double x){
	if (x <= INT_MAX &&	x >= INT_MIN)
		return true;
	else
		return false;
}

