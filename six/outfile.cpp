//запись в файл
#include <iostream>
#include <fstream>

int main(){
	using namespace std;
	char automobile[50];
	int year;
	double a_price;
	double d_price;

	ofstream outFile;

	outFile.open("carinfo.txt");
	cout << "Введите производителя и модель автомобиля: ";
	cin.getline(automobile, 50);
	cout << "Введите год выпуска: ";
	cin >> year;
	cout << "Введите запрашиваемую цену: ";
	cin >> a_price;
	d_price = 0.913 * a_price;
	//отображаем введенную инфу на экране
	cout << fixed;
	cout.precision(2);
	cout.setf(ios_base::showpoint);
	cout << "Производитель и модель: " << automobile << endl;
	cout << "Год: " << year << endl;
	cout << "Начальная цена: $" << a_price << endl;
	cout << "Окончательная цена: $" << d_price << endl;
	// теперь ввыводим через outFile
	outFile << fixed;
	outFile.precision(2);
	outFile.setf(ios_base::showpoint);
	outFile << "Производитель и модель: " << automobile << endl;
	outFile << "Год: " << year << endl;
	outFile << "Начальная цена $" << a_price << endl;
	outFile << "Окончательная цена $" << d_price << endl;
	outFile.close();

	return 0;
}

