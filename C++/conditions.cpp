#include <iostream>

using namespace std;

int main(){
    int age ;
    cout << "Enter your age: " << endl;
    cin >> age;
    // if checks the value is correspondant to it then it executes further
    if (age <= 18){
        cout << "You are not eligible for job.";
    }
    // nested if-else statments
    else if(age > 18 && age <= 60){
        cout << "You are eligible for job";
        if(age >=55){
            cout << ", but retirement soon";
        }
    }
    // this executes when if condition is not met
    else{
        cout << "You are not eligible for job." ;
    }
    return 0;
}