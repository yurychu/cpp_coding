#include <iostream>

using namespace std;

int main(){
    enum Days {SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY};
    Days abc = MONDAY; // так попробовать
    int choice;

    cout << "Enter a day (0 - 6)>";
    cin >> choice;
    if (choice == SUNDAY || choice == SATURDAY)
        cout << "\nYour already off on weekends!\n";
    else
        cout << "\nOkay, I\'ll put in teh vacation day\n";

    return 0;
}
