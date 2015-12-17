//вопросы для самоконтроля

//1.for, while - проверка на входе, do while - на выходе

#include <iostream>

int main(){
	using namespace std;
//2
	int i;
	for (i = 0; i < 5; i++){
		cout << i;
	}
	cout << endl;
//3
	int j;
	for (j = 0; j < 11; j+=3)
		cout << j;
	cout << endl << j << endl;
//4
	int g = 5;
	while(++g < 9)
		cout << g++ << endl;

//5
	int p = 8;
	do
		cout << "p = " << p << endl;
	while (p++ < 5);

//6
	int k;
	for (k = 1; k <= 64; k *= 2)
		cout << k << " ";
	cout << endl;
//7
	int w, q;
	for (w = 0, q = 10; w != 5; ++w, --q)
		cout << w << " --- " << q << endl;
//8
	int x = (1, 024);
	cout << "x = " << x << endl;

	int y;
	y = 1, 024;
	cout << "y = " << y << endl;
	
	cout << hex;
	cout << (0x8 * 0x8) << endl;
	return 0;
}

