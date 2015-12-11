// вопросы для самоконтроля
#include <iostream>

//6
struct fish{
    char kind[20];
    int weight;
    float length;
};

int main(){
	using namespace std;

	//1
	char actor[30];
	short betsie[100];
	float chuck[13];
	long double dipsea[64];

	//2
	int ar[5] = {2, 4, 6, 8, 10};
	//3
	int even = ar[0] + ar[4]; 

	//4
	float ideas[4] = {400.4, 500.5, 600.6, 700.7};
	cout << ideas[1] << endl;

	//5
	char food[] = "cheeseburger";

	//7
	fish perch = {
		"percidae", 
		1,
		2
	};
	
	//8
	enum Response {No, Yes, Maybe};

	//9
	double ted = 59.99;
	double *p_ted = &ted;
	cout << *p_ted << endl;

	//10
	float treacle[10] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0};
	float *p_treacle = treacle;
	cout << p_treacle[0] << " first and last " << p_treacle[9] << endl;

	//11
	cout << "Введие целое положительное число: ";
	int size;
	cin >> size;
	int *arra = new int [size];
	cout << "Создан массив из " << size << " элементов." << endl;
	delete [] arra;
	//12
	cout << (int *) "Home of the jolly bytes" << endl;

	//13
	fish *some_fish = new fish;
	cout << "Выделили память для структуры fish " << some_fish << " теперь введите вид: ";
	cin >> some_fish->kind;
	cout << "Вид рыбы: " << some_fish->kind << endl;
	delete some_fish;

	return 0;
}

