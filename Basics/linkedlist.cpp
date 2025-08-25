#include<iostream>
#include <ranges>
#include <vector>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    public:
    Node(int data1 , Node* next1){
        data = data1;
        next = next1;
    }



}; 

Node* convertarraytoll(vector<int> &arr){
    Node* head =new Node(arr[0], nullptr);  
    Node* mover=head;
    for(int i=1;i<arr.size();i++){
       Node* temp=new Node(arr[i]);
       mover->next=temp;
       mover=mover->next;       
    }
    return head;
}

int main(){
    vector<int> values = {1, 2, 3};
    Node* head = convertarraytoll(values);
    return 0;
}   