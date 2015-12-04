// средства string
#include <iostream>
#include <cstring>
int main(){
	using namespace std;
	char charr1[20];
	char charr2[20] = "jaguar";
	string str1;
	string str2 = "panther";

	str1 = str2;
	strcpy(charr1, charr2);

	str1 += " paste";
	strcat(charr1, "juice");

	int len1 = str1.size();
	int len2 = strlen(charr1);

	cout << "Строка " << str1 << " содержит " << len1 << " символов. \n";
	cout << "Строка " << charr1 << " содержит " << len2 << " символов. \n";

	return 0;
}

