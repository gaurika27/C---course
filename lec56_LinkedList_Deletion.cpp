//Linked List
//4)Deletion
#include <iostream>
using namespace std;

class node{
  public:
  int data;
  node* next;

  node(int val){
    data=val;
    next=NULL;
  }
};

void insertAtTail(node* &head, int val){
  node* n=new node(val);
  
  if(head==NULL){
    head=n;
    return;
  }

  node* temp=head;
  while(temp->next!=NULL){
    temp=temp->next; 
  }
  temp->next=n;
}

void display(node* head){
  node* temp=head;
  while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
  }
  cout<<endl;
}

void deletion(node* &head, int val){

  if(head==NULL){
    return;
  }
  
  if(head->next==NULL){
    deleteAtHead(head);
    return;
  }

  node* temp=head;
  while(temp->next->data!=val){
    temp=temp->next;
  }
  node* todelete=temp->next;
  temp->next=temp->next->next;
}

void deleteAtHead(node* &head){
  node* todelete=head;
  head=head->next;

  delete todelete;
}

int main(){

  node* head=NULL;  
  insertAtTail(head,1);
  insertAtTail(head,2);
  insertAtTail(head,3);
  insertAtTail(head,4);
  insertAtTail(head,5);
  insertAtTail(head,6);
  insertAtTail(head,7);
  display(head);
  deletion(head,3);
  display(head);
  deletion(head,7);
  display(head);
  deleteAtHead(head);
  display(head);

  return 0;
}