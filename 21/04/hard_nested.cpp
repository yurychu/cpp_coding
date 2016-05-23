#include <iostream>
using namespace std;


int main(){
    int first_num, second_num;
    cout << "Enter two num\nFirst: ";
    cin >> first_num;
    cout << "Second: ";
    cin >> second_num;
    cout << endl << endl;

    if (first_num >= second_num){
        if ((first_num % second_num) == 0){
            if (first_num == second_num)
                cout << "They are the same!\n";
            else
                cout << "They are evenly divisible!\n";
        } else
            cout << "They are not evenly divisible!\n";
    } else
        cout << "Hey! The second one is larger!\n";

    return 0;
}
