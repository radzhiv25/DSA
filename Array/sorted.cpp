#include <iostream>

using namespace std;

int main(){
    int arr[5] = {1,4,5,8,2};
    for(int i = 0; i < 5; i++){
        if(arr[i] >= arr[i-1]){

            cout << " " << arr[i];
        }
        else{
            return false;
        }
    }
    return true;
}