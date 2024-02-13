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

    // static object
    Hero Heman;
    Heman.name = "Ramesh";
    Heman.setHealth(85);

    cout << "Name: " << Heman.name << " " << "Health : " << Heman.getHealth() << endl;

    // dynamic object
    Hero *Shewoman = new Hero;
    (*Shewoman).name = "Geeta"; // or Shewoman->name = "Sita"; (both are same
    (*Shewoman).setHealth(90);
    cout << "Name: " << (*Shewoman).name << " " << "Health : " << (*Shewoman).getHealth() << endl;

    Shewoman->name = "Sita";
    Shewoman->setHealth(95);
    cout << "Name: " << Shewoman->name << " " << "Health : " << Shewoman->getHealth() << endl;

    return 0;
}