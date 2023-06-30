#include <bits/stdc++.h>

using namespace std;

int main()
{
    int day;
    cout  << "Enter Day: "
    cin >> day;

    switch (day)
    {
        // when the case value matches it executes the statements
    case 1:
        cout << "Monday";
        // this will break the statement then and there
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
        break;
    case 6:
        cout << "Saturday";
        break;
    case 7:
        cout << "Sunday";
        break;

    default:
        cout << "Invalid input";
        break;
    }

    return 0;
}