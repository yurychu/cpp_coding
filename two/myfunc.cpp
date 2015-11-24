// делаем свою функцию
#include <iostream>
void simon(int); //прототип функции
double taxes(double);

int main(){
	using namespace std;

	simon(3);
	cout << "Pick an integer: ";
	int count;
	cin >> count;
	simon(count); //еще вызов
	cout << "Done!" << endl;

	return 0;
}

void simon(int n){
	using namespace std;
	cout << "Simon says touch your toes " << n << " times." << endl;
	//будет без возвращающих операторов
}

double taxes(double t){
	return t * 2;
}

