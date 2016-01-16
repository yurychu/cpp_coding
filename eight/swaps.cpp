// обмен значениями переменных используя ссылок и указателей

#include <iostream>

void swap_reference(int & a, int & b); // a, b - псевдонимы данных типа int
void swap_pointer(int * p, int * q); // p, q - адреса данных типа int
void swap_value(int x, int y); // x, y - новые переменные

int main(){
	using namespace std;

	int wallet_1 = 300;
	int wallet_2 = 350;

	cout << "wallet_1 = " << wallet_1 << endl;
	cout << "wallet_2 = " << wallet_2 << endl;

	cout << "Использование ссылок для обмена содержимым:\n";	
	swap_reference(wallet_1, wallet_2);  // передача ссылок
	cout << "Теперь\n wallet_1 = " << wallet_1 << endl;
	cout << "wallet_2 = " << wallet_2 << endl;

	cout << "Использования указателей для обмена содержимым:\n";
	swap_pointer(&wallet_1, &wallet_2);
	cout << "Теперь\n wallet_1 = " << wallet_1 << endl;
	cout << "wallet_2 = " << wallet_2 << endl;

	cout << "Попытка использованя передачи по значению:\n";
	swap_value(wallet_1, wallet_2);
	cout << "Теперь\n wallet_1 = " << wallet_1 << endl;
	cout << "wallet_2 = " << wallet_2 << endl;

	return 0;
}

void swap_reference(int & a, int & b){
	int temp;
	temp = a;
	a = b;
	b = temp;
}
 
void swap_pointer(int * p, int * q){
	int temp;
	temp = *p;
	*p = *q;
	*q = temp;
}

void swap_value(int x, int y){
	int temp;
	temp = x;
	x = y;
	y = temp;
}

