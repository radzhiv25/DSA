// run time polymorphism with function overriding or method overriding
#include <iostream>

using namespace std;

class Animal{

    public:
    void speak(){
        cout << "Speaking .." << endl;
    }
};

class Dog: public Animal{
    public:
    void speak(){
        cout << "Barking .." << endl;
    }
};

int main(){

    Dog labra;
    labra.speak();

    return 0;
}