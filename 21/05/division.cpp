#include <iostream>
using namespace std;

float division(unsigned short int x, unsigned short int y);

int main(){
    unsigned short int x, y;
    cout << "Введите делимое и делитель: ";
    cin >> x >> y;
    float result = division(x, y);

    if (result == -1)
        cout << "Деление невозможно\n";
    else
        cout << "Результат равен: " << result << endl;

    return 0;
}



float division(unsigned short int x, unsigned short int y){
    if (y == 0)
        return -1;
    float result = x / y;
    return result;
}

