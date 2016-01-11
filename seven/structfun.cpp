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
polar rect_to_polar(rect xypos);
void show_polar(polar dapos);

int main(){
	using namespace std;

	rect rplace;
	polar pplace;

	cout << "Введите значение в координатах х и у: ";
	while (cin >> rplace.x >> rplace.y){
		pplace = rect_to_polar(rplace);
		show_polar(pplace);
		cout << "Следующие координаты: (q для выхода): ";
	}
	cout << "Готово.\n";

	return 0;
}

// преобразование прямоугольных координат в полярные
polar rect_to_polar(rect xypos){
	polar answer;
	answer.distance = sqrt(xypos.x * xypos.x + xypos.y * xypos.y);
	answer.angle = atan2(xypos.y, xypos.x);
	return answer; // возвратит структуру polar 
}

// отображение полярных координат с преобразованием радиан в градусы
void show_polar(polar dapos){
	using namespace std;

	const double Rad_to_deg = 57.2957791;
	cout << "расстояние = " << dapos.distance;
	cout << ", угол = " << dapos.angle * Rad_to_deg;
	cout << " градусов\n";
}
