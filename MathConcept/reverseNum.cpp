#include <bits/stdc++.h>

using namespace std;

int revNum(int num){
    int rev = 0;
    while(num > 0){
        int lastDigit = num % 10;
        rev = rev * 10 + lastDigit;
        num = num / 10;
    }
    return rev;
}

int main(){
    int n;
    cout << "Enter a number: "; 
    cin >> n;
    cout << "Reversed number is: ";
    cout << revNum(n);
    return 0;
}