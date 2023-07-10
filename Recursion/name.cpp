#include <iostream>

using namespace std;

void name(int i, int n){
    if(i <= n){
        cout << "Rajeev Krishna a Frontend Developer." << endl;
    }
    i++;
    name(i,n);
}

int main(){
    int n;
    cout << "Enter the number of times: ";
    cin >> n;
    name(1,n);
}