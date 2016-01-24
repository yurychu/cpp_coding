// использование ссылок на стрктуру

#include <iostream>

using namespace std;

struct sysop {
	char name[26];
	char quote[64];
	int used;
};

const sysop & use(sysop & sysopref);  // функция, возвращающая ссылку на структ

int main(){
	sysop looper = {
		"Рик Цикличный",
		"Я выполняю переходы",
		0
	};

	use(looper);
	cout << "Looper: " << looper.used << " вызов\n";

	sysop copycat;
	copycat = use(looper);
	cout << "Looper: " << looper.used << " вызов\n";
	cout << "use(looper) " << use(looper).used << " вызов \n";

	return 0;
}

// use()  возвращает передаваему ей ссылку
const sysop & use(sysop & sysopref){
	cout << sysopref.name << " говорит:\n";
	cout << sysopref.quote << endl;
	sysopref.used++;
	return sysopref;
}

