#include <bits/stdc++.h>

using namespace std;

int count(int n){
    int count = 0;
    while(n > 0){
        // int lastDigit = n % 10;
        // count updates gives us the number of digits
        count = count + 1;
        n = n / 10;
    }
    return count;
}

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "The number of digits are: " << count(num);
}