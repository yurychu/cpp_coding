//вложенные циклы и двумерный массив

#include <iostream>

const int Cities = 5;
const int Years = 4;

int main(){
	using namespace std;
	const char *cities[Cities] = {
		//для 5 строк
		"Gribble City",
		"Gribbletown",
		"New Gribble",
		"San Gribble",
		"Gribble Vista"
	};
	
	int maxterms[Years][Cities] = {
		{95, 99, 86, 100, 104},
		{95, 97, 90, 106, 102},
		{96, 100, 89, 108, 104},
		{97, 102, 89, 108, 104}
	};

	cout << "Максимальные температуры за 2003 - 2006 годы \n\n";
	for (int city = 0; city < Cities; ++city){
		cout << cities[city] << ":\t";
		for (int year = 0; year < Years; ++year)
			cout << maxterms[year][city] << "\t";
		cout << endl;
	}
	return 0;
}

