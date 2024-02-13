// inheritance

#include <iostream>

using namespace std;

class Human{

    public: 
    string name;
    int age;
    int height;
    int weight;
    int dayOfWork;

    int getAge(){
        return age;
    }

    void setWeight(int weight){
        this -> weight = weight;
    }
};

class Male: public Human{
    public:
    string color;

    void sleep(){
        cout << "Male sleeping." << endl;
    }
};

class Female: protected Human{
    public:
    int getDay(){
        return this->dayOfWork;
    }
    void workDay(int dayOfWork){
        this->dayOfWork = dayOfWork;
    }
};

int main(){

    Male Ramesh;
    Female Rani;
    Rani.workDay(5);
    cout << "Days of Work: " << Rani.getDay() << endl;

    Ramesh.name = "Ram";
    Ramesh.color = "White";
    Ramesh.age = 32;
    Ramesh.height = 170;
    Ramesh.weight = 70;

    cout << "Name: " << Ramesh.name << endl;
    cout << "Color: " << Ramesh.color << endl;
    cout << "Age: " << Ramesh.age << endl;
    cout << "Height: " << Ramesh.height << endl;
    cout << "Weight: " << Ramesh.weight;

    return 0;
}