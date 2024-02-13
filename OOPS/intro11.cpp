// Multiple Inheritance

#include <iostream>

using namespace std;

class Animal{

    public:
    string breed;
    int weight;

    public:
    void sound(){
        cout << "I am an animal" << endl;
    }
};

class Human{

    public:
    string color;

    public:
    void communicate(){
        cout << "I am a human" << endl;
    }
};

class Mutation: public Animal, public Human{

};

int main(){

    Mutation M;
    M.breed = "Labrador";
    M.color = "White";
    M.sound();
    M.communicate();

    return 0;
}