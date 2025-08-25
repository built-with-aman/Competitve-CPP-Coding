// wave form in matrix
#include<iostream>
#include <vector>

using namespace std;

int main(){

    //pointer approach
    // int rows, cols;
    // cin >> rows >> cols;
    // int** arr = new int*[rows];
    // for(int i=0; i<rows; i++){
    //     arr[i] = new int[cols];
    //     for(int j=0; j<cols; j++){
    //         cin >> arr[i][j];
    //     }
    // }

      int rows, cols;
    cin >> rows >> cols;

    vector<vector<int>> arr(rows, vector<int>(cols));
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    // print in wave form
    for(int j=0; j<cols; j++){
        if(j%2==0){
            for(int i=0; i<rows; i++){
                cout << arr[i][j] << " ";
            }
        }else{
            for(int i=rows-1; i>=0; i--){
                cout << arr[i][j] << " ";
            }
        }

    }
    cout << endl;
    return 0;
}
