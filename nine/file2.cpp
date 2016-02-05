// а тут содержатся функции, вызываемые в файле file1.cpp

#include <iostream>
#include <cmath>
#include "coordin.h"  // шаблоны структур, прототипы функций

// преобразование прямоугольных координат в полярные
polar rect_to_polar(rect xypos){
	using namespace std;

	polar answer;

	answer.distance = sqrt(xypos.x * xypos.x + xypos.y * xypos.y);
	answer.angle = atan2(xypos.y, xypos.x);

	return answer;  // возврат структуры polar
}

// вывод полярных координат, преобразование радиан в градусы
void show_polar(polar dapos){
	using namespace std;
	const double Rad_to_deg = 57.29577951;
	cout << "радиус = " << dapos.distance;
	cout << ", угол = " << dapos.angle * Rad_to_deg;
	cout << " градусов\n";
}

