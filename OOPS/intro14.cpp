// compile time polymorphism with Operator overloading
#include <iostream>

using namespace std;

class A{
    public:
    int a;
    int b;

    public:
    int add(){
        return a+b;
    }

    // operator overloading
    void operator+ (A &obj){
        cout << "Hello ji";
    }
};

int main(){

    A obj1, obj2;
    obj1.a = 10;
    obj1.b = 20;

    obj2.a = 30;
    obj2.b = 40;

    obj1 + obj2;

    return 0;
}