#include <bits/stdc++.h>

using namespace std;

void addTwo(int nums[], int target){
    int num = nums.size();
    for(int i = 0; i < num - 1; i++){
        for (int j = i + 1; j < num; j++){
            if(nums[i] + nums[j] == target){
                return {i, j};
            }
        }
    }
    return {};
}

int main(){
    int n;
    cin >> n;
    int nums[n];
    int target;
    cin >> target;
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    cout << addTwo(nums, target);
    return 0;
}
