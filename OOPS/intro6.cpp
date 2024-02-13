#include <iostream>

using namespace std;

class Hero{
    private:
    int health;

    public:
    string name;
    int level;

    Hero(){
        cout << "Constructor being called " << endl;
    }

    // destructor
    ~Hero(){
        cout << "Destructor being called " << endl;
    }

};

int main(){
    // static object
    Hero Heman;

    // dynamic object
    Hero *Shewoman = new Hero;

    //  manually being done because of dynamic object
    delete Shewoman;

    return 0;
}