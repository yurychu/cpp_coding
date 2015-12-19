//использование оператора if

#include <iostream>

int main(){
	using namespace std;

	char ch;
	int spaces = 0;
	int total = 0;
	cin.get(ch);
	while(ch != '.'){
		if (ch == ' ')
			++spaces;
		++total;
		cin.get(ch);
	}
	cout << spaces << " пробелов, " << total
	<< " общее количество символов в предложении\n";

	return 0;
}

