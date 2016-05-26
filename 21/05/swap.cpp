#include <iostream>
using namespace std;


void swap(int x, int y);


int main(){
    int x = 5, y = 10;
    cout << "Main. Before swap, x: " << x << " y: " << y << "\n";
    swap(x, y);
    cout << "Main. After swap, x: " << x << " y: " << y << endl;  // не поменяются
    return 0;
}


void swap(int x, int y){
    int temp;

    cout << "Swap. Before swap, x: " << x << " y: " << y << "\n";

    temp = x;
    x = y;
    y = temp;

    cout << "Swap. After swap, x: " << x << " y: " << y << endl;
}
