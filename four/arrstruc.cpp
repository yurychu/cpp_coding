//структуры в массиве

#include <iostream>

struct inflatable{
	char name[20];
	float volume;
	double price;
};

int main(){
	using namespace std;

	inflatable guests[2] = {
		{"Bambi", 0.5, 21.99},
		{"Godzilla", 2000, 565.99}
	};
	
	cout << "Гости " << guests[0].name << " и " << guests[1].name << "\nимеют общий объем в "
	<< guests[0].volume + guests[1].volume << " кубических футов. \n";
	
	return 0;
}

