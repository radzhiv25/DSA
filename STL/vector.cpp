#include <bits/stdc++.h>

using namespace std;

int main(){
    vector <int> v;
    v.push_back(1);
    v.emplace_back(10);
    int arr[] = v;
    // v = arr;
    cout << arr;
    return 0;
}