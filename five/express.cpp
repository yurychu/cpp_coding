// значения выражений

#include <iostream>

int main(){
	using namespace std;

	int x;
	cout << "Выражение x = 100 имеет значение ";
	cout << (x = 100) << endl;
	cout << "Теперь x = " << x << endl;
	cout << "Выражение x < 3 имеет значение ";
	cout << (x < 3) << endl;
	cout << "Выражение x > 3 имеет значение ";
	cout << (x > 3) << endl;
	cout.setf(ios_base::boolalpha); //средство с++
	cout << "Выражение x < 3 имеет значение ";
	cout << (x < 3) << endl;
	cout << "Выражение x > 3 имеет значение ";
	cout << (x > 3) << endl;

	return 0;
}

