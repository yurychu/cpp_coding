// читает в массив до 10 значений
// прекращается при нечисловом вводе
// считает среднее, выводит значения, которые выше среднего

#include <iostream>
#include <cctype>

int main(){
	using namespace std;

	const int ArSize = 10;	

	double donat[ArSize];

	double value;
	double sum = 0;

	for (int i = 0; i < ArSize; i++){
		cout << "Введите числовые значения: ";
		cin >> value;

		if (!value){
			cout << "Во ввод попало нечисловое значение, ввод завершен\n";
			break;
		} else {
			cout << "Ввод получен!\n";
			donat[i] = value;
			sum += value;
			cout << "Запомнили значение = " << value << endl;
		}
	}

	if (value){
		cout << "Массив сформирован" << endl;

		double middle = sum / ArSize;
		cout << "Среднее значение = " << middle << endl;

		cout << "Следующие значения больше среднего: " << endl;
		for (int i = 0; i < ArSize; i++){
			if (donat[i] > middle)
				cout << donat[i] << '\t';
		}
	}

	cout << endl;
	return 0;
}

