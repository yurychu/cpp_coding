//определение, прототипирование и вызов функции

#include <iostream>

void simple(); //прототип

int main(){
	using namespace std;

	cout << "main() вызовет функцию simple():\n";
	simple(); //собственно вызов
	
	return 0;
}

//определение функции
void simple(){
	using namespace std;
	cout << "Я функция simple.\n";
}

