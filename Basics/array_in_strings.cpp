#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  string A = "AMAN";
  int len = A.size();
  A[len - 1] = 'S';   // this will change my last string N-> S
  cout << A[len - 1]; // we use len-1 for last index since in array we start from 0 and end at (n-1)

  // cout<<A[1]; // M will be printed

  return 0;
}