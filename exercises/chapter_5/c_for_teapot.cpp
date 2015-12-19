//вводим помесячные объемы продаж книг

#include <iostream>

int main(){
	using namespace std;
	const int Mounts = 12;
	int sum[Mounts];
	char mounts[Mounts][25] = {
		"январь",
		"февраль",
		"март",
		"апрель",
		"май",
		"июнь",
		"июль",
		"август",
		"сентябрь",
		"октябрь",
		"ноябрь",
		"декабрь"
	};
	int i;
	for (i = 0; i < Mounts; i++){
		cout << "Введите объем продаж за " << mounts[i] << ": ";
		cin >> sum[i];
	}
	cout << "Отлично, теперь посчитаем сумму за год!" << endl;
	
	int result = 0;
	for (i = 0; i < Mounts; i++){
		result += sum[i];
	}
	cout << "В итоге за год мы продали " << result << " книг(и)" << endl;

	return 0;
}

