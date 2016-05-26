#include <iostream>
using namespace std;


int doubled(int);
long doubled(long);
float doubled(float);
double doubled(double);


int main(){
    int my_int = 6500;
    long my_long = 65000;
    float my_float = 6.5F;
    double my_double = 6.5e20;

    cout << "doubled int :" << doubled(my_int) << endl;
    cout << "doubled long:" << doubled(my_long) << endl;
    cout << "doubled float:" << doubled(my_float) << endl;
    cout << "doubled double:" << doubled(my_double) << endl;
    return 0;
}


int doubled(int original){
    cout << "In doubled (int):\n";
    return 2 * original;
}


long doubled(long original){
    cout << "In doubled (long):\n";
    return 2 * original;
}


float doubled(float original){
    cout << "In doubled (float):\n";
    return 2 * original;
}

double doubled(double original){
    cout << "In doubled (double):\n";
    return 2 * original;
}
