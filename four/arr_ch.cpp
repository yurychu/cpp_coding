#include <iostream>
int main(){
	char dog[5] = {'b', 'e', 'a', 'u', 'x'};
	char cat[5] = {'f', 'a', 't', 's', '\0'};

	using namespace std;
	cout << cat << endl;

	char bird[10] = "Mr chs";

	cout << sizeof bird / sizeof (char) << endl;

	char fish[] = "buuuuubles";
	return 0;
}

