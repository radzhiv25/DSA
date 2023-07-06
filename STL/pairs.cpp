#include <bits/stdc++.h>

using namespace std;

int main(){
    pair <int, int> x = {2,4};
    cout << x.second << " " << x.first << endl;
    pair <int, pair<int, int>> y = {1,{5,56}};
    cout << y.second.second << endl;
    pair <int, int> arr[] = {{1,3}, {5,6}, {9,11}};
    cout << arr[1].second;

}