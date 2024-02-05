#include <iostream>
using namespace std;

class Node{
  public:
  int data;
  Node* next;

  //constructor
  Node(int data){
    this->data=data;
    this->next=NULL;
  }

  //destructor
  ~Node(){
    int value=this->data;
    //memory free
    if(this->next!=NULL){
      delete next;
      this->next=NULL;
    }
  }
};

//insertion at head
void insertAtNode(Node* &head, int d){
  Node* temp=new Node(d);
  temp->next=head;
  head=temp;
}

//insertion at tail
void insertAtTail(Node* &tail, int d){
  Node* temp=new Node(d);
  tail->next=temp;
  tail=tail->next;
}

//insert at position
void insertAtPosition(Node* &tail, Node* &head, int position, int d){
  if(position==1){
    insertAtNode(head, d);
    return;
  }

  Node* temp=head;
  int cnt=1;

  while(cnt<position-1){
    temp=temp->next;
    cnt++;
  }

  if(temp->next==NULL){
    insertAtTail(tail,d);
    return;
  }

  Node* nodeToInsert=new Node(d);
  nodeToInsert->next=temp->next;
  temp->next=nodeToInsert;

}
//traversal
void traversal(Node* &head){
  Node* temp=head;
  while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
  }
  cout<<endl;
}

//deletion
void deletion(int position, Node* &head){
  //deleting first or start node
  if(position==1){
    Node* temp=head;
    head=head->next;
    delete temp;
  }
}

int main(){
  Node* node1=new Node(10);
  // cout<<node1->data<<endl;
  // cout<<node1->next<<endl;

  Node* head=node1;
  Node* tail=node1;
  traversal(head);

  insertAtNode(head,12);
  traversal(head);
  insertAtTail(tail, 40);
  traversal(head);
  insertAtPosition(tail, head, 2, 55);
  traversal(head);
}