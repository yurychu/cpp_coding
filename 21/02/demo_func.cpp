#include <iostream>

using namespace std;

void demo_func(){
    cout << "In demo function\n";
}

int main(){
    cout << "In main\n";
    demo_func();
    cout << "Back in main\n";
    return 0;
}
