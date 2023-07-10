#include <iostream>

using namespace std;

int funcnum(int n){
    if(n == 0){
        return 0;
    }
    return n + funcnum(n-1);
}

int main(){
    int n;
    cin >> n;
    funcnum(n);
    // return 0;
}