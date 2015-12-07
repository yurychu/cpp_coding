//юзаем new

#include <iostream>

int main(){
	using namespace std;

	int *pt = new int; //выделили пространство для int
	*pt = 1001; // сохранили в нем значение
	cout << "int ";
	cout << "значение = " << *pt << ", местоположение = " << pt << endl;

	double *pd = new double; //выделили пространство для double
	*pd = 10000001.0; //сохранили значение
	cout << "double ";
	cout << "значение = " << *pd << ", местоположение = " << pd << endl;

	cout << "размер pt = " << sizeof(pt);
	cout << ", размер *pt = " << sizeof(*pt) << endl;

	cout << "размер pd = " << sizeof(pd);
	cout << ", размер *pd = " << sizeof(*pd) << endl;

	return 0;
}

