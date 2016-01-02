// считает вероятность выигрыша в лотерею при выборе нескольких чисел

#include <iostream>

long double probability(unsigned numbers, unsigned picks);

int main(){
	using namespace std;
	double total, choices;
	cout << "Укажите общее число номеров и \n"
			"количество номеров, которые нужно угадать:\n";

	while((cin >> total >> choices) && choices <= total){
		cout << "У вас один шанс из ";
		cout << probability(total, choices);
		cout << " что бы выиграть.\n";
		cout << "Следующие два числа (q для выхода): ";
	}
	cout << "Удачи!\n";

	return 0;
}

// функция вычисляет вероятность правильного угадывания picks чисел
// из numbers возможных

long double probability(unsigned numbers, unsigned picks){
	long double result = 1.0; // локальные переменные
	long double n;
	unsigned p;
	
	for (n = numbers, p = picks; p > 0; n--, p--)
		result = result * n / p;
	return result;
}

