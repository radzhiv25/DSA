#include <bits/stdc++.h>

using namespace std;

int palindrome(int num){
    int dup = num;
    int rev = 0;
    while(num > 0){
        int lastD = num % 10;
        rev = rev * 10 + lastD;
        num = num / 10;
    }
    if(dup == rev){
        return true;
    }
    else{
        return false;
    }
    // return 0;
}

int main(){
    int num;
    cin >> num;
    cout << palindrome(num);
    return 0;
}