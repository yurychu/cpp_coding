#include <iostream>
using namespace std;


int doubler(int amount_to_double);


int main(){
    int result = 0;
    int input;

    cout << "Enter a number between 0 and 10 000 to double: ";
    cin >> input;

    cout << "\nBefore doubler is called... ";
    cout << "\ninput: " << input << " doubled: " << result << endl;

    result = doubler(input);

    cout << "\nBack from doubler...\n";
    cout << "\ninput: " << input << " doubled: " << result << endl;

    return 0;
}


int doubler(int original){
    if (original <= 10000)
        return original * 2;
    else
        return -1;
    cout << "You can\'t get here!\n";
}
