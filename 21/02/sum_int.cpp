#include <iostream>

using namespace std;

int add(int x, int y){
    cout << "In add(), recieved " << x << " and " << y << endl;
    return x + y;
}


int main(){
    cout << "I in main()!\n";

    int a, b, c;

    cout << "Enter two num:>";
    cin >> a;
    cin >> b;

    cout << "\nCalling add()\n";
    c = add(a, b);

    cout << "\nBack in main()\n";
    cout << "\'c\' was set to " << c;
    cout << "\nExiting ... \n";

    return 0;
}
