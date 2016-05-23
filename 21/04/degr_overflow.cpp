#include <iostream>

using namespace std;


int main(){
    unsigned int difference;
    unsigned int big_number = 100;
    unsigned int small_number = 50;

    difference = big_number - small_number;
    cout << "Difference is: " << difference;

    difference = small_number - big_number;
    cout << "\nNow diff is: " << difference << endl;
    return 0;
}
