#include <iostream>

using namespace std;

class Hero{

    private:
    int health;

    public:
    string name;
    int level;

    int getHealth(){
        return health;
    }
    
    void setHealth(int h){
        health = h;
    }
};

int main(){
    Hero heman;
    heman.name = "Ramesh";
    heman.level = 32;
    heman.setHealth(85);

    cout << "Name: " << heman.name << endl;
    cout << "Level: " << heman.level << endl;
    cout << "Health: " << heman.getHealth() << endl;

    return 0;
}