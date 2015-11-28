// сравниваем int and char

#include <iostream>
int main(){
	using namespace std;

	char ch = 'M';

	int i = ch;

	cout << "The asci code for " << ch << " is " << i << endl;
	cout << "Add one to the character code: " << endl;
	ch = ch + 1;
	i = ch;
	cout << "the asci code for " << ch << " is " << i << endl;

	//используем put
	cout << "Displayin char ch using cout.put(ch): ";
	cout.put(ch);
	cout.put('!'); //для отображения символьной константы
	cout << endl << "Done" << endl;

	char my_ch = 65;
	cout << my_ch << endl;

	char alarm = '\a';
	cout << alarm << "Dont do that again! \a\n";
	cout << "Ben \"Buggsie\" Hacher\nwas here!\n";

	return 0;
}

