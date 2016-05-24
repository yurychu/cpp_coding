#include <iostream>
using namespace std;


int area(int length, int width);  //прототип


int main(){
    int length_of_yard;
    int width_of_yard;
    int area_of_yard;

    cout << "\nHow wide is your yard? >";
    cin >> width_of_yard;
    cout << "\nHow long is your yard? >";
    cin >> length_of_yard;

    area_of_yard = area(length_of_yard, width_of_yard);

    cout << "\nYour yard is: " << area_of_yard << " square feet\n";

    return 0;
}


int area(int yard_length, int yard_width){
    return yard_length * yard_width;
}
