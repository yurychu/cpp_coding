// arrfun2 - функция с аргументом массивом 
#include <iostream>

const int ArSize = 8;

int sum_arr(int arr[], int n); // прототип

int main(){
	int cookies[ArSize] = {1, 2, 4, 8, 16, 32, 64, 128};

	std::cout << cookies << " = адрес массива, ";
	std::cout << sizeof cookies << " = sizeof cookies\n";
	int sum = sum_arr(cookies, ArSize);
	std::cout << "Всего съедено печенья: " << sum << std::endl;
	sum = sum_arr(cookies, 3);
	std::cout << "Первые три едока съели: " << sum << " печенек.\n";
	sum = sum_arr(cookies + 4, 4);
	std::cout << "Последние 5 едоков съели: " << sum << " печенек.\n";
	return 0;
}

int sum_arr(int arr[], int n){
	int total = 0;

	std::cout << arr << " = arr, ";
	std::cout << sizeof arr << " = sizeof arr\n";

	for (int i = 0; i < n; i++)
		total = total + arr[i];
	return total;
}

