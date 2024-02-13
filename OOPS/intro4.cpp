#include <iostream>

using namespace std;

class Hero{

    private:
    int health;

    public:
    string name;
    int level;

    Hero(){
        cout << "Constructor called" << endl;
    }

    Hero (int health){
        cout << "this -> " << this << endl;
        this -> health = health;
    }

    int getHealth(){
        return health;
    }
    
    void setHealth(int h){
        health = h;
    }
};

int main(){
    // static object
    Hero Heman(10);
    cout << "Address of Heman: " << &Heman << endl;

    // dynamic object
    Hero *Shewoman = new Hero;

    return 0;
}