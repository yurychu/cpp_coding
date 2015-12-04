//присваивание сложение добавление
#include <iostream>
#include <string>
int main(){
	using namespace std;
	string s1 = "penguin";
	string s2, s3;

	cout << "Вы можете присвоить один объект другому: s2 = s1 \n";
	s2 = s1;
	cout << "s1: " << s1 << ", s2: " << s2 << endl;
	cout << "Вы можете присвоить объекту string строку в стиле C.\n";
	cout << "s2 = \"buzzard\"\n";
	s2 = "buzzard";
	cout << "s2: " << s2 << endl;
	cout << "Мы можем сцеплять строки: s3 = s1 + s2\n";
	s3 = s1 + s2;
	cout << "s3: " << s3 << endl;
	cout << "Мы можем добавлять строки.\n";
	s1 += s2;
	cout << "s1 += s2 yields s1 = " << s1 << endl;
	s2 += " for a day";
	cout << "s2 += \" for a day\" yields s2 = " << s2 << endl;

	return 0;
}

