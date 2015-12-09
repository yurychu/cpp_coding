//смотрим указатели на строки
#include <iostream>
#include <cstring>
int main(){
	using namespace std;
	char animal[20] = "bear";
	const char *bird = "wren";
	char *ps;

	cout << animal << " и ";
	cout << bird << endl;

	//cout << ps << "\n";
	
	cout << "Введити вид животного: ";
	cin >> animal;
	//cin >> ps; //опасная ошибка попробовать
	
	ps = animal;
	cout << ps << "s!\n";

	cout << "Перед использованием strcpy(): \n";
	cout << animal << " по адресу " << (int *) animal << endl;
	cout << ps << " по адресу " << (int *) ps << endl;
	ps = new char[strlen(animal) + 1]; //получаем новое хранилище
	strcpy(ps, animal);
	cout << "После использования strcpy(): \n";
	cout << animal << " по адресу " << (int *) animal << endl;
	cout << ps << " по адресу " << (int *) ps << endl;

	delete [] ps;

	return 0;
}

