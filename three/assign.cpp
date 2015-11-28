//смотрим изменение типа при присваивании
#include <iostream>
int main(){
	using namespace std;
	cout.setf(ios_base::fixed, ios_base::floatfield);
	float tree = 3; // int to float
	int guess = 3.9832; // float to int
//	int debt = 7.2e12;

	cout << "tree = " << tree << endl;
	cout << "guess = " << guess << endl;
//	cout << "debt = " << debt << endl;
	return 0;
}

