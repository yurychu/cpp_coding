//имена Благотворительного Ордена Программистов используя структуры

#include <iostream>

const int StrSize = 30;
const int StructSize = 5;

struct bop{
	char fullname[StrSize];
	char title[StrSize];
	char bopname[StrSize]; // секретное имя
	int preference; // 0 - отображать полное имя, 1 - титул, 2 - имя БОП.
};

int main(){
	using namespace std;

	bop members[StructSize] = {
		{"Jackie Chan", "Master", "Secret Joda", 1},
		{"Jan Cloud", "Van", "Damm", 0},
		{"Arnold Shwarzeneger", "Mr.", "Arni", 2},
		{"Silvestr Stallone", "Silver", "Stal One", 0},
		{"Klark Kent", "Savior", "Superman", 1}
	};
	char choice;
	while (choice != 'q'){
		cout << "Отчет о благотворительном ордене программеров!\n"
				"Выберите как отображать членов ордена\n"
				"a. по именам\tb. по должностям\n"
				"c. по никам БОП\t d. по предпочтениям\n"
				"q. выйти\n"
				"Ваш выбор: ";
		cin >> choice;

		cout << endl;
		if (choice == 'a')
			for (int i = 0; i < StructSize; i++)
				cout << members[i].fullname << endl;
		else if (choice == 'b')
			for (int i = 0; i < StructSize; i++)
				cout << members[i].title << endl;
		else if (choice == 'c')
			for (int i = 0; i < StructSize; i++)
				cout << members[i].bopname << endl;
		else if (choice == 'd')
			for (int i = 0; i < StructSize; i++)
				if (members[i].preference == 1)
					cout << members[i].title << endl;
				else if (members[i].preference == 2)
					cout << members[i].bopname << endl;
				else
					cout << members[i].fullname << endl;

		cout << endl;
	}
	return 0;
}

