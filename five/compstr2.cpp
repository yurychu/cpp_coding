//сравнение строк типа string

#include <iostream>
#include <string>

int main(){
	using namespace std;
	string word = "?ate";

	for (char ch = 'a'; word != "mate"; ch++){
		cout << word << endl;
		word[0] = ch;
	}
	cout << "По окончании цикла word содержит: " << word << endl;

	return 0;
}

