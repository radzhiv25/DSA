#include <iostream> 

using namespace std;


int main(){
    // an array can only contain data of same data type i.e if interger then interger only or string so string only
    int arr[5]={1,4,5,89,6};
    // int n = 5;
    int largest = arr[0];
    int smallest = arr[0];
    for(int i = 0; i < 5; i++){
        // largest element in the array
        if(arr[i] > largest){
            largest = arr[i];
        }
        // smallest element in the array
        if(arr[i] < smallest){
            smallest = arr[i];
        }
    }
            cout << largest<< endl;
            cout << smallest;
    return -1;
}