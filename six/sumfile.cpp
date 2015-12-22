//чтение файла
#include <iostream>
#include <fstream>
#include <cstdlib>
const int SIZE = 60;

int main(){
	using namespace std;
	char filename[SIZE];

	ifstream inFile;

	cout << "Введите имя файла данных: ";
	cin.getline(filename, SIZE);

	inFile.open(filename); //ассоциируем с файлом

	if (!inFile.is_open()){
		cout << "Не удалось открыть файл." << filename << endl;
		cout << "Программа прервана\n";
		exit(EXIT_FAILURE);
	}

	double value;
	double sum = 0.0;
	int count = 0;
	inFile >> value;
	while (inFile.good()){
		++count;
		sum += value;
		inFile >> value;
	}

	if (inFile.eof())
		cout << "Достигнут конец файла.\n";
	else if (inFile.fail())
		cout << "Ввод прекращен из-за несоответсвия данных.\n";
	else
		cout << "Ввод прекращен по неизвестно причине\n";

	if (count == 0)
		cout << "Никаких данных обработано не было";
	else {
		cout << "Прочитано элементов: " << count << endl;
		cout << "Сумма: " << sum << endl;
		cout << "Среднее: " << sum / count << endl;
	}

	inFile.close();

	return 0;
}

