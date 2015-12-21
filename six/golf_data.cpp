// не допустить нечисловой ввод, предложить ввести заново

#include <iostream>
const int Max = 5;

int main(){
	using namespace std;
	int golf[Max];
	cout << "Пожалуйста, введите ваши результаты матча по гольфу.\n";
	cout << "Необходимо ввести " << Max << " показателей\n";
	int i;
	for (i = 0; i < Max; i++){
		cout << "раунд #" << i + 1 << ": ";
		while (!(cin >> golf[i])){
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Пожалуйста введите число: ";
		}
	}

	//вычислить среднее
	double total = 0.0;
	for (i = 0; i < Max; i++)
		total += golf[i];

	//сообщить результат
	cout << total / Max << " = средний результат "
	<< Max << " раундов\n";

	return 0;
}

