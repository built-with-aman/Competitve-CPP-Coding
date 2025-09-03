//doubly linked list
#include<iostream>
using namespace std;

class Node {
public:
  int data;
  Node* prev;
  Node* next;

  Node(int d){
    data = d;
    prev = nullptr;
    next = nullptr;
  }
};
// traversing the list
void print(Node *head){
  Node *temp = head;
  while(temp != nullptr){
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}

//insert at head
void insertathead(Node* &head , int d){
  Node* temp= new Node(d);
  temp->next = head;

      temp->prev = nullptr;  // new head always has no previous

            head->prev = temp;
        
  head=temp;

}

// insert from tail
void inserattail(Node* &tail, int d){
  Node* temp= new Node(d);
  tail->next = temp;
  temp->prev = tail; // new node’s prev is old tail
  tail = temp;

}


// gives length of liked list
int getlength(Node* head){
  int length=0;
  Node* temp= head;
  while(temp != NULL){
    length++;
    temp = temp->next;
  }
  return length;
}


int main(){


Node* node1 = new Node(10);
Node* head = node1;
Node* tail = node1; 
//print 
print(node1);
insertathead(node1 , 12);
print(node1); 
insertathead(node1 , 15);
print(node1);

inserattail(tail , 22);
print(head);

int len = getlength(head);   
cout << "Length: " << len; 
   return 0;
}