#include <bits/stdc++.h>

using namespace std;

int main(){
    string str1, str2;
    cout << "Enter two strings: ";
    cin >> str1 >> str2;
    cout << "Size of the string : ";
    cout << str1.length() << " " << str2.length() << endl;
    cout << "Concatenation of String: " << str1 + " " + str2 << endl;
    cout << "First character swap: ";
    char str3 = str1[0];
    str1[0] = str2[0];
    str2[0] = str3;
    cout << str1 << " " << str2;
    return 0;
}