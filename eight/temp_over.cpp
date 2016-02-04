// использование правил частичного упорядочивания
// перегрузка шаблонов

#include <iostream>

template <typename T>  // шаблон А
void ShowArray(T arr[], int n);

template <typename T>  // шаблон В
void ShowArray(T * arr[], int n);

struct debts{
	char name[50];
	double amount;
};

int main(void){
	using namespace std;
	int things[6] = {13, 31, 103, 301, 310, 130};

	struct debts mr_E[3] = {
		{"Ima Wolfe", 2400.0},
		{"Ura Foxe", 1300.0},
		{"Iby Stout", 1800.0}
	};

	double * pd[3];
	// установка указателей на элементы amount стрктур массива mr_E
	for (int i = 0; i < 3; i++)
		pd[i] = &mr_E[i].amount;
	cout << "Список значений количества предметов гражданина Е:\n";
	// things - это массив значений типа int
	ShowArray(things, 6); // использует шаблон типа А
	cout << "Список долгов гражданина Е:\n";
	// pd - это массив указателей на данные типа double
	ShowArray(pd, 3);
	// это использует шаблон В - более специализированный
	return 0;
}

template <typename T>
void ShowArray(T arr[], int n){
	using namespace std;
	cout << "шаблон А\n";
	for (int i = 0; i < n; i++)
		cout << arr[i] << ' ';
	cout << endl;
}

template <typename T>
void ShowArray(T * arr[], int n){
	using namespace std;
	cout << "шаблон В\n";
	for (int i = 0; i < n; i++)
		cout << *arr[i] << ' ';
	cout << endl;
}

