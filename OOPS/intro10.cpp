// multilevel inheritance

#include <iostream>

using namespace std;

class Animal{

    public:
    string breed;
    int weight;

    public:
    void communicate(){
        cout << "I am an animal" << endl;
    }
};

class Dog: public Animal{

};

class Labrador: public Dog{

};

int main(){

    Labrador Casper;
    Casper.breed = "Labrador";
    Casper.communicate();

    return 0;
}