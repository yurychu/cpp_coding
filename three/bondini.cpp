//используем управляющие последовательности

#include <iostream>
int main(){
	using namespace std;

	cout << "\aOperation \"HyperHype\" in now activated!\n";
	cout << "Enter your agent code:__________\b\b\b\b\b\b\b\b";
	long code;
	cin >> code;

	cout << "\aYou entered " << code << "...\n";
	cout << "\aCode verivied ! Proceed with Plan z3!\n";

	return 0;
}

