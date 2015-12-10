//используем delete и функции
#include <iostream>
#include <cstring>

using namespace std;
char * getname(void);

int main(){
	char *name; //указатель без хранилища
	name = getname(); //вернули из функции указатель
	cout << name << " по адресу " << (int *) name << "\n";
	delete [] name; //освобождаем память, но так отдельно от функции лучше не делать

	name = getname(); //повторно используем освобожденную память
	cout << name << " по адресу " << (int *) name << "\n";
	delete [] name;
	return 0;
}

char * getname(){
	char temp[80]; //временное хранилище
	cout << "Введите фамилию: ";
	cin >> temp;
	char * pn = new char[strlen(temp) + 1];
	strcpy(pn, temp);
	
	return pn;
}

