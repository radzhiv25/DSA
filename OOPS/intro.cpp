#include <iostream>

using namespace std;

class Hero{
    char name[100];
    int health;
    char level;
};

int main(){
    Hero heman;
    cout << "Size of Hero: " << sizeof(heman) << endl;
    return 0;
}