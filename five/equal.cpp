//делаем ошибки - равенство вместо сравнения

#include <iostream>

int main(){
	using namespace std;
	int quizscores[10] = 
		{20, 20, 20, 20, 20, 19, 20, 18, 20, 20};
	cout << "Так правильно: \n";
	int i;

	for (i = 0; quizscores[i] == 20; i++)//тут тоже опасно проверять значения а не индексы
		cout << "quiz " << i << " равно 20\n";

	cout << "Так неправильно и опасно: \n";
	for (i = 0; quizscores[i] = 20; i++)
		cout << "quiz " << i << " равно 20\n";

	return 0;
}

