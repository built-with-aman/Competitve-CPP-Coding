#include <iostream>
#include <string>
using namespace std;

int main() {

    #ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif

    string name;
    getline(cin, name); // reads full line from input.txt
    cout << "Hello, " << name << endl;
    return 0;
}
