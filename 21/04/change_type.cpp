#include <iostream>

using namespace std;


void int_div(int x, int y){
    int z = x / y;
    cout << "(int_div) z: " << z << endl;
}


void float_div(int x, int y){
    float a = (float)x;  // приведение в старом стиле
    float b = static_cast<float>(y);  // приведение в современном стиле
    float c = a / b;

    cout << "(float_div) c: " << c << endl;
}

int main(){
    int x = 5, y = 3;

    int_div(x, y);
    float_div(x, y);

    return 0;
}
