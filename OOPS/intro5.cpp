#include <iostream>

using namespace std;

class Hero{

    private:
    int health;

    public:
    string name;
    int level;

    Hero (){
        cout << "Constructor called" << endl;
    }

    // parameterized constructor
    Hero(int health, int level){
        this -> level = level;
        this -> health = health;
    }

    // copy constructor
    Hero(Hero &h){
        cout << "Copy constructor called" << endl;
        this -> level = h.level;
        this -> health = h.health;
    }

    void print(){
        cout << "Level : " << this -> level << endl;
        cout << "Level : " << this -> health << endl; 
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
    Hero Heman;
    Heman.name = "Ramesh";  
    Heman.setHealth(85);
    Heman.level = 32;

    Hero Yoman(Heman);
    Yoman.print();

    // dynamic object
    Hero *Shewoman = new Hero;

    return 0;
}