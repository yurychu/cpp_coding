//используем блок операторов в for

#include <iostream>

int main(){
	using namespace std;
	cout << "Изумительная система сложит и вычислит для вас среднее: ";
	cout << " из пяти значений. \n";
	cout << "Пожалуйста, введите пять значений: \n";

	double number;
	double sum = 0.0;

	for (int i = 1; i <= 5; i++){
		cout << "Значение " << i << ": ";
		cin >> number;
		sum += number;
	}

	cout << "В самом деле, пять замечательных значений! ";
	cout << "Их сумма равна " << sum << endl;
	cout << "А среднее - " << sum / 5 << ".\n";
	cout << "Изумительный Счетчик прощается с вами! \n";

	return 0;
}

