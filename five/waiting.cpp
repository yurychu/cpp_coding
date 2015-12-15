//используем clock() для временной задержки программы

#include <iostream>
#include <ctime>

int main(){
	using namespace std;

	cout << "Введите время задержки в секундах: ";

	float secs;
	cin >> secs;

	clock_t delay = secs * CLOCKS_PER_SEC;

	cout << "starting\a\n";
	clock_t start = clock();

	while (clock() - start < delay)
		;
	cout << "Готово! \a\n";

	return 0;
}

