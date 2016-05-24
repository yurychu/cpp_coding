#include <iostream>
using namespace std;


void my_function();  // proto


int x = 5, y = 7;  // global var


int main(){
    cout << "x from main: " << x << "\n";
    cout << "y from main: " << y << "\n\n";

    my_function();

    cout << "Back from my_function!\n\n";
    cout << "x from main: " << x << "\n";
    cout << "y from main: " << y << "\n";

    return 0;
}


void my_function(){
    int y = 10;

    cout << "x from my_function: " << x << "\n";
    cout << "y from my_function: " << y << "\n\n";
}
