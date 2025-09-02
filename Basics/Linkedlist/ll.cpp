#include<iostream>
using namespace std;
class linkedlist{

  public: 
  int data;
  linkedlist* next;  // pointer to the next node

  // constructor
  linkedlist(int val)
{
  data=val; // initialize data
  next=nullptr; // initialize next pointer
  // below is the same as above
  // it uses the 'this' pointer to access the class members , this pointer points to the current object
  //this -> data=val;  
  //this -> next=nullptr;
}
};
void insertathead(linkedlist* &head , int val2){ 
  // new node create 
  linkedlist* temp= new linkedlist(val2);
  temp->next=head; // temp next is pointing to head
  head=temp; // head is now pointing to the new node
}

//-----------------------------------------------------------------

void insertattail(linkedlist* &tail , int val2){

  linkedlist* temp= new linkedlist(val2);
  tail->next=temp;
  tail=temp;
}
//-----------------------------------------------------------------

 // inserting at any nth position 
 void insertataposition(linkedlist* &head, linkedlist* &tail, int nth , int val2){
   // insert at head 
   linkedlist* temp= head;
   if(nth ==1){
  insertathead(head , val2);
  return;
}
// insert at tail
if(temp->next==NULL){
  insertattail(tail , val2);
  return;
}

if(nth == 2){
  insertattail(tail , val2);
  return;
}

  int count=1;
  while(count < nth-1){
    temp=temp->next;
    count++;
  }

  //creating node for val2
  linkedlist* nodetoinsert=new linkedlist(val2);
  nodetoinsert->next= temp->next;
  temp->next=nodetoinsert;

}


// printing function 
void print(linkedlist* &head){
  linkedlist* temp=head;
  while(temp != nullptr){
    cout<<temp->data<<" ";

    temp=temp->next;
  }
  cout<<endl;
}
// int main(){
//   linkedlist* head = new linkedlist(10); // creating the head
//   insertathead(head, 15); // inserting 15 at head
//   insertathead(head, 20); // inserting 20 at head

//   insertathead(head, 25); // inserting 25 at head
//   print(head);


//    return 0;
// }



  // we are gettig ans in reverse order 
  // so we have to insert from tail
int main(){

// if we want to at at stating postio
// then we will have to add an condition 

  linkedlist* head = new linkedlist(10); // creating the head

  // head pointed to linkedlistnode
  linkedlist* tail = head;

  print(head);


  // we are gettig ans in reverse order 
  // so we have to insert from tail
  insertattail(tail , 12);
  print(head); 
  insertattail(tail , 15);
  print(head);

  // we want to insert in middle 
  insertataposition(head , tail , 2 , 22);
   print(head);


   cout<<head->data<<endl;
   cout<<tail->data<<endl;  

   return 0;
}