#include <iostream> 

using namespace std;

void largest(int arr[], int n){
    int max = arr[0];
    for(int i = 0; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    cout << endl << max;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int j = 0; j < n; j++){
        cout << arr[j] << " ";
    }
    cout << endl;
    largest(arr, n);
    return 0;
}