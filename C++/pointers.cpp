#include <iostream>

using namespace std;

int main(){
    int a = 10;
    int *aptr = &a;

    cout << aptr << endl;
    a = 25;
    aptr++;
    cout << aptr << endl;
    return 0;
}