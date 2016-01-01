//отслеживает пожертвования в общество влиятельных лиц)))

#include <iostream>

struct Sponsor {
	char name[30];
	double donat;
};

int main(){
	using namespace std;

	int persons;
	cout << "Введите количество людей, внесших пожертвование: ";
	cin >> persons;

	if (!persons)
		cout << "Пожертвовавших нету(" << endl;

	Sponsor *donat = new Sponsor [persons];

	for (int i = 0; i < persons; i++){
		cout << "Введите данные для пожертвовавшего #" << i + 1 <<":";

		cout << "Имя: ";
		cin >> donat[i].name;
		cout << "Сумма пожертвования: ";
		cin >> donat[i].donat;
	}

	for (int i = 0; i < persons; i++){
		if (donat[i].donat >= 1000){
			cout << "Список суперщедрых:\n";
			break;
		}
		else{
			cout << "Супер щедрых нету(\n";
			break;
		}
	}

	for (int i = 0; i < persons; i++)
		if (donat[i].donat >= 10000)
			cout << donat[i].name << endl
			<< "сумма: " << donat[i].donat << endl;

	if (persons)
		cout << "Просто щедрые люди:\n";

	for (int i = 0; i < persons; i++){
		if (donat[i].donat < 10000){
			cout << donat[i].name << endl
			<< "сумма: " << donat[i].donat << endl;
		}
	}

	return 0;
}

