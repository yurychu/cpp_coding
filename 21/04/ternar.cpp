#include <iostream>
using namespace std;


int main(){
    int x, y, z;
    cout << "Enter two num\n";
    cout << "First: ";
    cin >> x;
    cout << "\nSecond: ";
    cin >> y;
    cout << endl;

    if (x > y)
        z = x;
    else
        z = y;

    cout << "z: " << z << endl;

    z = (x > y) ? x : y;
    cout << "z: " << z << endl;
    return 0;
}
