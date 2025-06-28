#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    // int i=1;
    // while(i<=6){
    //     cout<<"AMAN SONI "<<i<<endl;
    //     i=i+1;
    // }

    // do while
    //  execute the first time irrespective of whatever condition you are giving
    int i = 2;
    do
    {
        cout << "Learning " << i << endl;
        i = i + 1;
    } while (i <= 1);

    cout << " i at ending " << i << endl;

    return 0;
}
