// find the index of first and last occurance 
// find the occurance of the number 4 in the sorted array 
// [2,3,4,4,4,4,4,4,8.10]

#include<iostream>
#include<vector>
using namespace std;

int firstoccurrence(vector<int>& arr, int x){
    
    int n=arr.size();
    int first=-1;
    int start=0, end=n-1;

    while(start<=end){
        int mid =start+(end-start)/2;

        if(arr[mid]==x){
            first=mid;
            end=mid-1;// search on left side
        }

        else if(arr[mid]<x){
           start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return first; 

}

int lastoccurrence(vector<int>& arr, int x){
    int last=-1; 
    int n=arr.size();
    int start =0, end=n-1;

        while(start<=end){
        int mid =start+(end-start)/2;

        if(arr[mid]==x){
            last=mid;
            start=mid+1;// search on right side
        }

        else if(arr[mid]<x){
           start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return last;
}



int main(){

    vector<int> arr={2,3,4,4,4,4,4,4,8,10};
    int x=4;
    int first =firstoccurrence(arr,x);
    int last  =lastoccurrence(arr,x);
    
    if(first==-1 || last==-1){
        cout<<"there is no such element in the array";
        
    }
    else{
        cout<< "the first occurrence index of " <<x<< "is "<<first<<endl;
        cout<< "the last occurrence index of " <<x<< "is "<<last<<endl;  
        
        return 0;
    }
}