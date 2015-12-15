// цикл while

#include <iostream>
const int ArSize = 20;

int main(){
	using namespace std;

	char name[ArSize];
	cout << "Введите ваше имя, пожалуйста: ";
	cin >> name;
	cout << "Вот ваше имя, посимвольно и в кодах ASCII: \n";
	int i = 0;
	while (name[i] != '\0'){
		cout << name[i] << ": " << int(name[i]) << endl;
		i++;
	}
	return 0;
}

