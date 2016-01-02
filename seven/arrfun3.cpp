// функции для работы с массивами, const в функциях

#include <iostream>

const int Max = 5;

// прототипы:
int fill_array(double ar[], int limit);
void show_array(const double ar[], int n); //у этой функции не получится изменить данные
void revalue(double r, double ar[], int n);

int main(){
	using namespace std;
	double properties[Max];

	int size = fill_array(properties, Max);
	show_array(properties, size);
	cout << "Введите коэффициент переоценки: ";
	double factor;
	cin >> factor;
	revalue(factor, properties, size);
	
	show_array(properties, size);
	cout << "Готово.\n";
	return 0;
}


int fill_array(double ar[], int limit){
	using namespace std;

	double temp;

	int i;
	for (i = 0; i < limit; i++){
		cout << "Введите значение #" << (i + 1) << ": ";
		cin >> temp;
		if (!cin){
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Неправильный ввод - процесс ввода прекращен.\n";
			break;
		}
		else if (temp < 0)
			break;
		ar[i] = temp;
	}
	return i;
}


// использование функции с защитой const
void show_array(const double ar[], int n){
	using namespace std;
	for (int i = 0; i < n; i++){
		cout << "Элемент #" << (i + 1) << ": $";
		cout << ar[i] << endl;
	}
}


void revalue(double r, double ar[], int n){
	for (int i = 0; i < n; i++)
		ar[i] *= r;
}

