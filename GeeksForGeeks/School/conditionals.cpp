#include <iostream> 

using namespace std;

int main(){
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    if(a > b){
        cout << a << " greater than " << b;
    }
    else if(a == b){
        cout << a << " equal to " << b;
    }
    else{
        cout << a << " lesser than " << b;
    }
    return 0;
}