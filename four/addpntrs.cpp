//сложение указателей, арифметика указателей
#include <iostream>
int main(){
	using namespace std;
	double wages[3] = {10000.0, 20000.0, 30000.0};
	short stacks[3] = {3, 2, 1};
	
	//два способа получить адрес массива
	double *pw = wages; //имя массива равно адресу
	short *ps = &stacks[0]; //или использовать операцию взятия адреса с эл массива
	
	cout << "pw = " << pw << ", *pw = " << *pw << endl;

	pw = pw + 1;
	cout << "Добавили 1 к указателю pw: \n";
	cout << "pw = " << pw << ", *pw = " << *pw << endl;
	cout << "ps = " << ps << ", *ps = " << *ps << endl << endl;

	ps = ps + 1;
	cout << "Добавили 1 к указателю ps: \n";
	cout << "ps = " << ps << ", *ps = " << *ps << endl;
	cout << "Обращение к двум элементам в нотации массива \n";
	cout << "stacks[0] = " << stacks[0] 
	<< ", stacks[1] = " << stacks[1] << endl;
	cout << "Обращение к двум элементам в нотации указателя \n";
	cout << "*stacks = " << *stacks
	<< ", *(stacks + 1) = " << *(stacks + 1) << endl;

	cout << sizeof(wages) << " = размер массива wages \n";
	cout << sizeof(pw) << " = размер указателя pw \n";

	return 0;
}

