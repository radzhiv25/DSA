#include <iostream>

using namespace std;

void callNum(int n){
    if(n <= 0) return;
    cout << n << endl;
    n--;
    callNum(n);
}

int main(){
    int n = 5;
    // cout << "Enter a number: ";
    // cin >> n;
    callNum(n);
    return 0;
}