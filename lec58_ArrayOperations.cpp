//Inserting the element at a specified position
#include <iostream>
using namespace std;
int main(){
  int size=5;
  int arr[20];

  cout<<"enter the elements: ";
  for(int i=0;i<size;i++){
    cin>>arr[i];
  }
  //to insert the element in the specified posiiton

  int a,b;

  cout<<"Enter the position where the element has to be inserted"<<endl;
  cin>>a;
  cout<<"Enter the value to be inserted"<<endl;
  cin>>b;

  size++;

  for(int i=size-1; i>=a-1; i--){
    arr[i+1]=arr[i];
  }
  arr[a-1]=b;

  for(int i=0; i<size ;i++){
    cout<<arr[i]<<" ";
  }
}