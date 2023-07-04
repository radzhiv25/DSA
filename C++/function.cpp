#include <iostream>
 
using namespace std;

// greeting
void greet(string name){
    cout << "Hey " << name << endl;
}

//sum of two numbers
int sum(int a, int b){
    int c = a + b;
    return c;
}
int main(){
    string name;
    cout << "Enter your name: ";
    cin >> name;
    greet(name);
    int num1, num2;
    cin >> num1 >> num2;
    int sum1 = sum(num1, num2);
    cout << sum1;
    return 0;
}