#include <iostream>
using namespace std;
int main(){
  int size=5,a,pos;
  int arr[20];

  cout<<"enter the elements: ";
  for(int i=0;i<size;i++){
    cin>>arr[i];
  }

  cout<<"enter the element to be deleted"<<" ";
  cin>>a;
  for(int i=0; i<size; i++){
    if(arr[i]==a){
      pos=i;
    }
  }
  for(int i=pos; i<=size-1;i++){
    arr[i]=arr[i+1];
  }
  size--;

  for(int i=0; i<size ;i++){
    cout<<arr[i]<<" ";
  }

  return 0;
}