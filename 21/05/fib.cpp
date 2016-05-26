#include <iostream>
using namespace std;


int fib(int x);

int main(){
    int result;

    result = fib(36);

    cout << result << endl;

    return 0;
}


int fib(int x){
    if (x < 3)
        return 1;

    int result;
    result = fib(x - 1) + fib(x - 2);

    return result;
}
