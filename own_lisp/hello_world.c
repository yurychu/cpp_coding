#include <stdio.h>

void print_hello(int n){
    for (int i = 0; i < n; i++){
        puts("hello!");
    }
}

int main(int argc, char** argv){
    print_hello(6);
    return 0;
}
