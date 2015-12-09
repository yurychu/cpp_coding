#include <iostream>
int main(){
	using namespace std;
	int arr[5] = {1, 3, 5};

	cout << arr[1] << endl;
	cout << arr[4] << endl;

	int size;
	cin >> size;
	int *pz = new int [size];

	cout << "длина массива равна: " << sizeof(pz) << endl;

	delete [] pz;

	return 0;
}

