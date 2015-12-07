//смотрим переменные-указатели

#include <iostream>

int main(){
	using namespace std;
	int updates = 6; //объявляем переменную
	int * p_updates; // объявляем укзатель на int

	p_updates = &updates;

	//выражем значения двумя способами.
	cout << "Значение: updates = " << updates;
	cout << ", *p_updates = " << * p_updates << endl;

	//выражаем адреса двумя способами
	cout << "Адреса: &updates = " << &updates;
	cout << ", p_updates = " << p_updates << endl;

	//меняем значение через указатель
	* p_updates = * p_updates + 1;
	cout << "Теперь updates = " << updates << endl;

	return 0;
}

