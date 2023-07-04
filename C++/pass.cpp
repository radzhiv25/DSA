#include <iostream>

using namespace std;
// this is pass by value
void increment(int num){
    cout << num << endl;
    num += 10;
    cout << num << endl;
    num += 20;
    cout << num << endl;
}

// pass by reference
void change(string &name){
    name[0] = 's';
    cout << name << endl; 
}

int main(){
    // int a = 20;
    // increment(a);
    // cout << a << endl;
    string name = "Rajeev";
    change(name);
    cout << name << endl;
    return 0;
}