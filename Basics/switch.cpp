#include <iostream>
using namespace std;
/*
Take the day no and print the corresponding day
for 1 print Monday
for 2 print tuesday and so on for  7 print sunday
*/

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int day;
    cin >> day;

    switch (day)
    {
    case 1:
        cout << "monday";
        break;

    case 2:
        cout << "tuesday";
        break;

    case 3:
        cout << "wednesday";
        break;
    case 4:
        cout << "thursday";
        break;

    case 5:
        cout << "friday";
        break;

    case 6:
        cout << "saturday";
        break;

    case 7:
        cout << "sunday";
        break;
    default:
        cout << "Invalid Day" << endl;
    }

    return 0;
}