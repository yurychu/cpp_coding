#include <iostream>
using namespace std;


int volume_cube(int length, int width = 25, int height = 1);


int main(){
    int length = 100;
    int width = 50;
    int height = 2;
    int volume;

    volume = volume_cube(length, width, height);
    cout << "First volume equals: " << volume << endl;

    volume = volume_cube(length, width);
    cout << "Second time volume equals: " << volume << endl;

    volume = volume_cube(length);
    cout << "Third time volume equals: " << volume << endl;

    return 0;
}


int volume_cube(int length, int width, int height){
    return (length * width * height);
}
