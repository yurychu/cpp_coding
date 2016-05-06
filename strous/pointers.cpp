#include <iostream>

using namespace std;

int main(){
	char v[6];
	char* p = &v[3];

	char x = *p;

	cout << p;
}
