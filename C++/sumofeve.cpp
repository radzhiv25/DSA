#include <iostream>

using namespace std;

int main()
{
    int n, sum = 0;
    int sum1 = 0;
    cin >> n;
    for (int i = 1; i <= n; i = i + 2)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
    }
    for (int j = 1; j <= n; j++)
    {
        if (j % 2 == 0)
        {
            sum1 += j;
        }
    }
    cout << sum << " " << sum1;
    return 0;
}
