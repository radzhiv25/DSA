#include <bits/stdc++.h>

using namespace std;

void pattern1(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    
}

int main(){
    // this is direct implementation for pattern
    // for(int i = 0; i < 5; i++){
    //     for (int j = 0; j < 5; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    int n;
    cout << "Enter the number for pattern: ";
    cin >> n;
    pattern1(n);
    return 0;
}