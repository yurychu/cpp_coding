#include <iostream>

using namespace std;


int main(){
    int red_sox_score, yankees_score;

    cout << "Enter the score for the Red Sox: ";
    cin >> red_sox_score;

    cout << "\nEnter the score for the Yankees: ";
    cin >> yankees_score;

    cout << endl;

    if (red_sox_score > yankees_score)
        cout << "Go Sox!\n";

    if (red_sox_score < yankees_score){
        cout << "Go Yankees!\n";
        cout << "Happy days in New York!\n";
    }

    if (red_sox_score == yankees_score){
        cout << "Cant be\n";
        cout << "Give me the real score for the Yanks: ";
        cin >> yankees_score;

        if (red_sox_score > yankees_score)
            cout << "Knew it! Go Yanks!\n";

        if (yankees_score == red_sox_score)
            cout << "Wow, it really\n";
    }

    cout << "\nThanks for telling me!\n";
    return 0;
}
