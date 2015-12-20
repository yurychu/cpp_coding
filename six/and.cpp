// операция И &&

#include <iostream>

const int ArSize = 6;

int main(){
	using namespace std;

	float naaq[ArSize];
	cout << "Введтие NAAQs" << endl;
	int i = 0;
	float temp;
	cout << "Первое значение: ";
	cin >> temp;
	while (i < ArSize && temp >= 0){
		naaq[i] = temp;
		++i;
		if (i < ArSize){
			cout << "Следующее значение: ";
			cin >> temp;
		}
	}
	if (i == 0)
		cout << "Нет данных, пока!\n";
	else {
		cout << "Введите ваш NAAQ: ";
		float you;
		cin >> you;
		int count = 0;
		for (int j = 0; j < i; j++)
			if (naaq[j] > you)
				++count;
		cout << count;
		cout << " ваших соседей имеют большее понимание о новом веке, чем вы";
	}
	return 0;
}

