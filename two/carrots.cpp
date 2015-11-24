//изучение переменных
#include <iostream>

int main() {
	using namespace std;
	int carrots;
	
	carrots = 25;
	cout << "I have ";
	cout << carrots;
	cout << " carrots!";
	cout << endl;
	
	carrots = carrots - 1;
	cout << "Crunch, crunch. Now I have " << carrots << " carrots." << endl;
	int steinway;
	int baldwin;
	int yamaha;
	yamaha = baldwin = steinway = 88;
	cout << yamaha << endl;
	cout << baldwin << endl;
	cout << steinway << endl;

	return 0;
}

