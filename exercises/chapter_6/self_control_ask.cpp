//вопросы для самоконтроля

#include <iostream>

int main(){
	using namespace std;
/*3	char ch;
	int ct1, ct2;
	ct1 = ct2 = 0;
	while ((ch = cin.get()) != '$'){
		cout << ch;
		ct1++;
		if (ch = '$')
			ct2++;
		cout << ch;
	}
	cout << "ct1 = " << ct1 << ", ct2 = " << ct2 << "\n";
	return 0;
*/
	//4
/*	int weight;
	weight >= 115 || weight < 125;
	
	ch == q || ch == Q;

	(x % 2 == 0) && (x != 26);

	(x % 2 == 0) && (x % 26 != 0);

	(donation >= 1000 && donation <= 2000) || guest == 1;
*/
	//5
/*	int x = 1;

	cout << !!x << endl;
*/
//6
/*
	int x;
	cin >> x;

	if (x > 0)
		x = x;
	if (x < 0)
		x = -x;
	cout << x << endl;
*/
//7
/*
	char ch;
	cin >> ch;
	switch (ch){
		case 'A': cout << "Hello A\n"; 
		case 'B': cout << "Hello B\n";
		case 'C': cout << "Hello C\n";
		case 'D': cout << "Hello D\n";
		break;
		default: 
			cout << "what you say?\n";
			cout << "yes a do?\n";
	}
*/

//9
	int line = 0;
	char ch;
	while (cin.get(ch) && ch != 'Q'){
		if (ch == '\n')
			line++;
	}
	cout << "Количество строк: " << line << endl;

	return 0;	
}

