#include <iostream>

using namespace std;

int main(){
    // with taking specific pointer
    // int arr[3] = {10, 20, 30};
    // int *ptr = arr;
    // for(int i = 0; i < 3; i++){
    //     cout << ptr << endl;
    //     ptr++;
    // }

    // without specific pointer
    int arr[5] = {10, 20, 30, 40, 50};
    for(int i = 0; i < 5; i++){
        // it gives the value of the address of that index
        cout << (arr+i) << endl;
        // it gives the exact value at the index
        cout << *(arr+i) << endl;
    }
    return 0;

}