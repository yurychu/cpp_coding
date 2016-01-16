// использование встроенной функции

#include <iostream>

inline double square(double x){ return x * x; }

int main(){
	using namespace std;

	double a, b;
	double c = 13.0;
	
	a = square(5.0);
	b = square(4.5 + 7.5);  // можно передать выражение

	cout << "a = " << a << ", b = " << b << endl;
	cout << "c = " << c;

	cout << ", c в квадрате = " << square(c++) << endl;
	cout << "Теперь с = " << c << endl;

	return 0;
}

