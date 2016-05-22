#include <iostream>
using namespace std;

int main(){
    for (int i = 32; i < 127; i++)
        cout << (char)i << " ";
    cout << endl;
    char ch = '\?';
    cout << "ch = -" << ch << "-" << endl;
    return 0;
}
