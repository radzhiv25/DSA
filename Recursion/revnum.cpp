#include <iostream>

using namespace std;

void revnum(int i, int n){
    if(i >= n){
        cout << i << endl;
    }
    i--;
    revnum(i,n);
}

int main(){
    int n, m;
    cin >> n;
    cin >> m;
    revnum(n,m);
}