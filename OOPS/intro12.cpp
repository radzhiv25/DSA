// inheritance ambiguity

#include <iostream>

using namespace std;

class A{
    public:
    void display(){
        cout << "Class A" << endl;
    }
};

class B{
    public:
    void display(){
        cout << "Class B" << endl;
    }
};

class C: public A, public B{

};

int main(){

    C obj;
    obj.A::display();
    obj.B::display();

    return 0;
}