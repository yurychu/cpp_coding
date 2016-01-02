// прототипы и вызовы функций

#include <iostream>

void cheers(int n); //нет значения возврата
double cube(double x); //возвращает double

int main(){
	using namespace std;

	cheers(5);
	cout << "Введите число: ";
	double side;
	cin >> side;

	double volume = cube(side);

	cout << side << " в кубе равно " 
	<< volume << " кубических метров.\n ";

	cheers(cube(2)); //защита прототипа в действии

	return 0;
}

void cheers(int n){
	using namespace std;
	for (int i = 0; i < n; i++)
		cout << "Спасибо !";
	cout << endl;
}

double cube(double x){
	return x * x * x;
}

