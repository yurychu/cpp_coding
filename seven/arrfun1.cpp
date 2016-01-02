// arrfun2 - функция с аргументом массивом 
#include <iostream>

const int ArSize = 8;

int sum_arr(const int *begin, const int *end); // прототип

int main(){
	int cookies[ArSize] = {1, 2, 4, 8, 16, 32, 64, 128};

	int sum = sum_arr(cookies, cookies + ArSize);
	std::cout << "Всего съедено печенья: " << sum << std::endl;
	sum = sum_arr(cookies, cookies + 3);
	std::cout << "Первые три едока съели: " << sum << " печенек.\n";
	sum = sum_arr(cookies + 4, cookies + 8);
	std::cout << "Последние 5 едоков съели: " << sum << " печенек.\n";
	return 0;
}

int sum_arr(const int *begin, const int *end){
	const int *pt;

	int total = 0;

	for (pt = begin; pt != end; pt++)
		total = total + *pt;
	return total;
}

