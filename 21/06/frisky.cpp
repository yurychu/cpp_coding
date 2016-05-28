#include <iostream>
using namespace std;

class Cat {
    public:
        // открытые методы доступа
        unsigned int get_age();
        void set_age(unsigned int age);

        unsigned int get_weight();
        void set_weight(unsigned int weight);

        // открытые методы
        void say_meow();

    private:
        // закрытые поля
        unsigned int age;
        unsigned int weight;
};


int main(){

    Cat frisky;

    frisky.set_age(4);
    cout << "Frisky is a cat who is: " << frisky.get_age() << " year old " << endl; 

    return 0;
}
