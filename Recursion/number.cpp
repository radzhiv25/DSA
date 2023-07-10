#include <iostream>

using namespace std;

void numbers(int i, int n){
    if(i<=n){
        cout << i << endl;
    }
    i++;
    numbers(i, n);
}

int main(){
    int n;
    cout << "Enter the range to print: ";
    cin >> n;
    numbers(1,n);
}