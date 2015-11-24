// преобразуем стоуны в фунты
#include <iostream>
int stone_to_lb(int); //прототип

int main(){
	using namespace std;

	int stone;
	cout << "Enter the weight in stone: ";
	cin >> stone;

	int pounds = stone_to_lb(stone);//возвращаем значение из функции
	cout << stone << " stone = ";
	cout << pounds << " pounds." << endl;
	return 0;
}

int stone_to_lb(int sts){
	return sts * 14;
}

