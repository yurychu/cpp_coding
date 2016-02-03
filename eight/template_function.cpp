// использую шаблонную функцию

#include <iostream>

// prototype
template <typename Any>  // устаревшее - class
void Swap(Any &a, Any &b);

int main(){
	using namespace std;
	int i = 10;
	int j = 20;
	
	cout << "i, j = " << i << ", " << j << endl;;
	cout << "Использование сгененрированной компилятором функции int swapper: \n";
	Swap(i, j);  // генерирует функцию void Swap(int &, int &)
	cout << "Теперь i, j = " << i << ", " << j << endl;

	double x = 24.5;
	double y = 81.7;
	cout << "x, y = " << x << ", " << y << endl;
	cout << "Использование сгенерированной компилятором функции double swapper:\n";
	Swap(x, y);  // генерирует функцию void Swap(double &, double &)
	cout << "Теперь x, y = " << x << ", " << y << endl;

	return 0;
}

// шаблон функции
template <typename Any>
void Swap(Any &a, Any &b){
	Any temp;
	temp = a;
	a = b;
	b = temp;
}

