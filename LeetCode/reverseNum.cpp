// for long numbers
#include <iostream>

using namespace std;

void revnum(int num){
    long reverse = 0;
    while(num != 0){
        int lastDigit = num % 10;
        reverse = reverse * 10 + lastDigit;
        num = num / 10;
    }
    cout << reverse;
}

int main(){
    int num;
    cin >> num;
    revnum(num); 
    return 0;
}