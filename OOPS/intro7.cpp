#include <iostream>

using namespace std;

class Hero{
    private:
    int health;

    public:
    string name;
    int level;
    static int timeToComplete;

};

int Hero::timeToComplete = 120;

int main(){
    // static object
    Hero Heman;
    cout << "Time to complete the mission is : " << Hero::timeToComplete;

    return 0;
}