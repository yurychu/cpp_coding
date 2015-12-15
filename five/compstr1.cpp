//сравнение строк в массивах

#include <iostream>
#include <cstring>

int main(){
	using namespace std;
	char word[5] = "?ate";
	
	for (char ch = 'a'; strcmp(word, "mate"); ch++){
		cout << word << endl;
		word[0] = ch;
	}
	cout << "По окончании цикла word содержит " << word << endl;
	return 0;
}

