//else if

#include <iostream>

const int Fave = 27;

int main(){
	using namespace std;
	int n;
	cout << "Попробуй угадать мое любимое число из диапазона 1-100: ";
	do {
		cin >> n;
		if (n < Fave)
			cout << "Твое значение меньше моего числа - попробуйте еще! ";
		else if (n > Fave)
			cout << "Твое значение больше моего числа - попробуй еще! ";
		else
			cout << Fave << " - правильно!\n";
	} while (n != Fave);

	return 0;
}

