// problem statement
/*A school has following rules for grading system:

a. Below 25- F
b. 26 To 44 -E
c. 45 To 49 -D
d. 50 To 59 -C
e. 60 To 79 -B
f. 80 To 100 -A
ask user to enter marks and print the corresponding grade
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int marks;
    cin >> marks;
    if (marks >= 80)
    {
        cout << "You passed with flying colors" << endl
             << "Your Grade is A" << endl;
    }
    else if (marks >= 60 && marks < 80)
    {
        cout << "You have done a Good Job " << endl
             << "Your Grade is B" << endl;
    }
    else if (marks >= 50 && marks < 60)
    {
        cout << "You can do better " << endl
             << "Your Grade is C" << endl;
    }
    else if (marks >= 45 && marks < 49)
    {
        cout << "You marks are poor" << endl
             << "Your Grade is D" << endl;
    }
    else if (marks >= 44 && marks < 49)
    {
        cout << "You marks are poor" << endl
             << "Your Grade is D" << endl;
    }
    else if (marks >= 26 && marks < 44)
    {
        cout << "You hardly passed" << endl
             << "Your Grade is E" << endl;
    }
    else
    {
        cout << "You FAILED your exam" << endl
             << "Your grade is F" << endl;
    }

    return 0;
}