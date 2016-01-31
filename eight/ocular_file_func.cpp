//функция с параметром типа ostream &

#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

void file_it(ostream & os, double fo, const double fe[], int n);
const int LIMIT = 5;

int main(void){
	ofstream fout;
	const char * fn = "ep-data.txt";
	fout.open(fn);
	if (!fout.is_open()){
		cout << "Невозможно открыть " << fn << ". Пока.\n";
		exit (EXIT_FAILURE);
	}
	double objective;
	cout << "Введите фокусное расстояние: "
	"объектива телескопа в мм: ";
	cin >> objective;
	double eps[LIMIT];
	cout << "Введите фокусные расстояния, в мм, " << LIMIT << " окуляров:\n";
	for (int i = 0; i < LIMIT; i++){
		cout << "Окуляр #" << i + 1 << ": ";
		cin >> eps[i];
	}
	file_it(fout, objective, eps, LIMIT);
	file_it(cout, objective, eps, LIMIT);
	cout << "Конец\n";
	return 0;
}

void file_it(ostream & os, double fo, const double fe[], int n){
	ios_base::fmtflags initial;
	initial = os.setf(ios_base::fixed); //сохранение исходного состояния форматирования
	os.precision(0);
	os << "Фокусное расстояние объектива: " << fo << " mm\n";
	os.setf(ios::showpoint);
	os.precision(1);
	os.width(12);
	os << "коэффициент увеличения";
	os.width(15);
	os << "окуляра" << endl;
	for (int i = 0; i < n; i++){
		os.width(12);
		os << fe[i];
		os.width(15);
		os << int(fo/fe[i] + 0.5) << endl;
	}
	os.setf(initial); // восстановление исходного состояния форматирования
}
