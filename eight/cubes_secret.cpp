// обычные и ссылочные переменные в функциях

#include <iostream>

double cube(double a);
double ref_cube(double &ra);

int main(){
	using namespace std;
	double x = 3.0;

	cout << cube(x);
	cout << " = куб числа " << x << endl;

	cout << ref_cube(x);
	cout << " = куб числа " << x << endl;

	return 0;
}

double cube(double a){
	a *= a * a;
	return a;
}

double ref_cube(double &ra){
	ra *= ra * ra;  // опасно так как изменяются исходные данные
	return ra;
}

