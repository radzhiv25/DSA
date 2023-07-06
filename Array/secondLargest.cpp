#include <iostream>

using namespace std; 

int main(){
    int arr[6] = { 1, 5, 67, 786, 56, 40};
    int largest,smallest = arr[0];
    int secondLargest,secondSmallest = -1;
    for(int i = 0; i < 6; i++){
        if(arr[i] > largest){
            // here second largest is assigned largest value
            secondLargest = largest;
            // the largest value of the array is assigned
            largest = arr[i];
        }
        // with the and condition the second largest is traversed in the array 
        if(arr[i] < largest && arr[i] > secondLargest){
            secondLargest = arr[i];
        }
    }
    for(int j = 0; j < 6; j++){
        if(arr[j] < smallest){
            secondSmallest = smallest;
            smallest = arr[j];
        }
        if(arr[j] != smallest && arr[j] < secondSmallest){
            secondSmallest = arr[j];
        }
    }
    cout << largest << " " << smallest << endl;
    cout << secondLargest << " " << secondSmallest; 
    return 0;
}