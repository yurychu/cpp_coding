//чтение с эмуляцией конца файла

#include <iostream>

int main(){
	using namespace std;
	char ch;
	int count = 0;
	cin.get(ch);
	while (cin.fail() == false){
		cout << ch;
		++count;
		cin.get(ch);
	}
	cout << endl << count << " символов прочитано\n";

	return 0;
}

