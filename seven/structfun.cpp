// функции с аргументами структурами

#include <iostream>
#include <cmath>

struct polar{
	double distance;
	double angle;
};

struct rect{
	double x;
	double y;
};

//prototype
void rect_to_polar(const rect *pxy, polar *pda);
void show_polar(const polar *pda);

int main(){
	using namespace std;

	rect rplace;
	polar pplace;

	cout << "Введите значение в координатах х и у: ";
	while (cin >> rplace.x >> rplace.y){
		rect_to_polar(&rplace, &pplace);
		show_polar(&pplace);
		cout << "Следующие координаты: (q для выхода): ";
	}
	cout << "Готово.\n";

	return 0;
}

// преобразование прямоугольных координат в полярные
void rect_to_polar(const rect * pxy, polar * pda){
	pda->distance = sqrt(pxy->x * pxy->x + pxy->y * pxy->y);
	pda->angle = atan2(pxy->y, pxy->x);
}

// отображение полярных координат с преобразованием радиан в градусы
void show_polar(const polar *pda){
	using namespace std;

	const double Rad_to_deg = 57.2957791;
	cout << "расстояние = " << pda->distance;
	cout << ", угол = " << pda->angle * Rad_to_deg;
	cout << " градусов\n";
}
