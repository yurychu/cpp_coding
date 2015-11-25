#include <iostream>

int convert_to_astro_units(double);
int main(){
	using namespace std;

	cout << "Введите число в световых годах: ";
	double light_years;
	cin >> light_years;

	int astro_units = convert_to_astro_units(light_years);

	cout << light_years << " световых лет = " 
	<< astro_units << " астрономических единиц."<< endl;
}

int convert_to_astro_units(double year){
	return year * 63240;
}

