# include <iostream> 

using namespace std;

void parasum(int i, int sum){
    if(i < 1){
        cout << sum;
        return;
    }
    parasum(i - 1 , sum + i);
}

int main(){
    int i;
    cin >> i;
    parasum(i,0);
    return 0;
}