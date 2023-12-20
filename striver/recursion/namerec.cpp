#include <iostream>

using namespace std;

void callName(int count){
    if(count == 5) return;
    cout << "Raj" << endl;
    count++;
    callName(count);
}

int main(){
    int count = 0;
    callName(count);
    return 0;
}