//читаем символы с помощью cin.get()

#include <iostream>
#include <stdio.h>

int main(){
	using namespace std;
	int ch;  // по особенному с int
	int count = 0;
	while((ch = cin.get()) != EOF){
		cout.put(char(ch));
		++count;
	}
	cout << endl << count << " символов прочитано\n";
	return 0;
}

