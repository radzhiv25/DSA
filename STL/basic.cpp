#include <iostream> 

using namespace std;

// void function is without 
void print(){
    cout << "This is void function" << endl;
}

// for int function return is must
int sum(int a, int b){
    return a + b;
}

int main(){
    print();
    int s = sum(7, 10);
    cout << s;
    return 0;
}