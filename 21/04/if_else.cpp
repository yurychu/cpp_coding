#include <iostream>
using namespace std;


int main(){
    int first_num, second_num;
    cout << "Please enter a big num: ";
    cin >> first_num;

    cout << "\nPlease enter a smaller num: ";
    cin >> second_num;

    if (first_num > second_num)
        cout << "\nThanks!\n";
    else
        cout << "\nOops, the second is bigger!\n";

    return 0;
}
