// специализация перекрывает шаблон

#include <iostream>
template <class Any>
void Swap(Any &a, Any &b);

struct job{
	char name[40];
	double salary;
	int floor;
};

// явная специализация
template <> void Swap<job>(job &j1, job &j2);

void Show(job &j);

int main(){
	using namespace std;

	cout.precision(2);
	cout.setf(ios::fixed, ios::floatfield);

	int i = 10, j = 20;
	cout << "i, j = " << i << ", " << j << endl;
	cout << "Использование сгенерированной компилятором функции int swapper:\n";
	Swap(i, j);  // генерирует функцию void Swap(int &, int &)
	cout << "Теперь i, j = " << i << ", " << j << endl;

	job sue = {"Сюзен Яффи", 73000.60, 7};
	job sidney = {"Сидни Таффи", 78060.72, 9};
	cout << "До обмена значениями между структурами job:\n";
	Show(sue);
	Show(sidney);

	Swap(sue, sidney);  // используется специализированная функция

	cout << "После обмена значениями между структурами job:\n";
	Show(sue);
	Show(sidney);

	return 0;	
}

template <typename Any>
void Swap(Any &a, Any &b){  // обобщенная версия
	Any temp;
	temp = a;
	a = b;
	b = temp;
}

// обменивает данные только между полями salaty and floor struc job
template <> void Swap<job>(job &j1, job &j2){
	double t1;
	int t2;
	t1 = j1.salary;
	j1.salary = j2.salary;
	j2.salary = t1;
	t2 = j1.floor;
	j1.floor = j2.floor;
	j2.floor = t2;
}

void Show(job &j){
	using namespace std;
	cout << j.name << ": $" << j.salary
		<< " на этаже " << j.floor << endl;
}

