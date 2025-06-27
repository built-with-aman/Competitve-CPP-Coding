#include<bits/stdc++.h> // it has all the libraries 
using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
    // some of the most used data types are
    // int,long, long long , float, double
    //string and getline
    //char
    
 
    // int
    int a;
    cin >> a;
    cout << "int: " << a << endl;

    // long
    long b;
    cin >> b;
    cout << "long: " << b << endl;

    // long long
    long long c;
    cin >> c;
    cout << "long long: " << c << endl;

    // float
    float d;
    cin >> d;
    cout << "float: " << d << endl;

    // double
    double e;
    cin >> e;
    cout << "double: " << e << endl;

    // char
    char f;
    cin >> f;
    cout << "char: " << f << endl;

    // string (single word)
    string g;
    cin >> g;
    cout << "string (single word): " << g << endl;
    
    //getline
    cin.ignore(); 
    string str;
    getline(cin , str);
    cout<<"string: "<<str<<endl;
}