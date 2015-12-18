//расчет инвестиций простой с 10% и сложно с 5%

#include <iostream>

int main(){
	using namespace std;

	const int BaseCapital = 100;
	float duffny = BaseCapital, cleo = BaseCapital;

	//cout << duffny << " " << cleo << endl;

	int i = 0;
	do {
		++i;
		duffny += (BaseCapital * 0.1);
		cout << "Даффни имеет за год " << i << " - " << duffny << " баксов" << endl;
		cleo += (cleo * 0.05);
		cout << "Клео имеет за год " << i << " - " << cleo << " баксов" << endl;
		cout << endl;
	} while (duffny >= cleo);

	return 0;
}

