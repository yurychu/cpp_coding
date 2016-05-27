#include <iostream>
using namespace std;


int expon(int num, int exp);


int main(){
    int num, exp;
    cout << "Введите число и степень: ";
    cin >> num >> exp;
    cout << "Результат возведения в степень равен: " << expon(num, exp) << endl;
    return 0;
}


int expon(int num, int exp){
    if (exp == 1)
        return num;

    int result = num * expon(num, exp - 1);
    return result;
}
