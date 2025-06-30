#include<iostream>
using namespace std;

void nNumberTriangle(int n) {
    int num =1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++)
        {
            cout<< num << " ";
            num=num+1;
        }
        cout<<endl;
    }
}

int main(){
       #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);    // Read from input.txt
    freopen("output.txt", "w", stdout);  // Write to output.txt
#endif
    int n;
    cin>>n;
    nNumberTriangle(n);
    return 0;
}