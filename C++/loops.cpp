#include <iostream>

using namespace std;

int main(){

    // the iteration is followed untill the number is reached
    // for(int i = 0; i <= 10; i++){
    //     cout << "Started with DSA"<< " " <<i << endl;
    // }

    // here the iteration is followed after the statement is executed
    int i = 1;
    while(i<6){
        cout << "This is while loop"<< " " << i << endl;
        // this executes after the above statement
        i++;
    } 
    
    // do while
    i = 2;
    do{
        cout << "This statement will execute anyhow." << endl;
        i++;
    }while(i<=1);
    cout << i << endl;
    return 0;
}