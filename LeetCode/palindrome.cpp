#include <iostream>

using namespace std;

void palindrome(int num){
    int dup = num;
    int rev = 0;
    while(num != 0){
        int lastDigit = num % 10;
        rev = rev * 10 + lastDigit;
        num = num / 10; 
    }
    if(num == rev){
        cout << "Is palindrome";
    }
    else{
        cout << "Is not a palindrome";
    }
}

int main(){
    int num;
    cout << "To check whether the given number is palindrome: "
    cin >> num;
    palindrome(num);
}