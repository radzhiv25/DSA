// compile time polymorphism with Function overloading

#include <iostream>

using namespace std;

class A{

    public:
    void display(){
        cout << "Class A" << endl;
    }

    int display(int a){
        cout << "Class A with int: " << a << endl;
    }
    
    void display(string name){
        cout << "Class A with name: " << name << endl;
    }
};

int main(){
    
        A obj;
        obj.display();
        obj.display("Ramesh");
    
        return 0;
}