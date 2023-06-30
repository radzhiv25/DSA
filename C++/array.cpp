#include <iostream>

using namespace std;

int main(){
    // we use [] for creating an array

    // empty [] mean infinite array

    // 1-D array
    int arr[5];
    cin >> arr[1] >> arr[2] >> arr[3] >> arr[4] >> arr[5];
    cout << arr[5] << endl;

    // 2-D array
    int arr1[2][3];
    cin >> arr1[0][3] >> arr1[1][2];
    cout << "At index(0,3): " << arr1[0][3] << " and At index(1,2): " <<arr1[1][2];
    return 0;
} 