#include <iostream>
using namespace std;


inline int doubled(int);


int main(){
    int target;

    cout << "Enter a number to work with: ";
    cin >> target;
    cout << endl;

    target = doubled(target);
    cout << "Target doubled: " << target << endl;

    target = doubled(target);
    cout << "Target doubled 2: " << target << endl;

    target = doubled(target);
    cout << "Target doubled 3: " << target << endl;
    return 0;
}


int doubled(int target){
    return 2 * target;
}
