#include <iostream>
using namespace std;


float convert(float);

int main(){
    float temp_fer;
    float temp_cel;

    cout << "Please enter the temperature in Fahrenheit: ";
    cin >> temp_fer;

    temp_cel = convert(temp_fer);

    cout << "\nHere the temperature in Celsius: ";
    cout << temp_cel << endl;

    return 0;
}


float convert(float temp_fer){
    float temp_cel;
    temp_cel = (temp_fer - 32) * 5 / 9;
    return temp_cel;
}
