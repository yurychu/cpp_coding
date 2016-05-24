#include <iostream>
using namespace std;


void my_func();


int main(){
    int x = 5;
    cout << "\nIn main x is: " << x;

    my_func();

    cout << "\nBack in main, x is: " << x << endl;

    return 0;
}


void my_func(){
    int x = 8;
    cout << "\nIn my_func, local x: " << x << endl;

    {
        cout << "\nIn block in my_func, x is: " << x;
        int x = 9;
        cout << "\nVery local x: " << x;
    }

    cout << "\nOut of block, in my_func, x: " << x << endl;
}
