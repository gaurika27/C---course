//Merging of two arrays
#include <iostream>
using namespace std;
int main(){
  int size1=5, size2=6;
  int arrResult=size1+size2;
  int arr1[size1], arr2[size2], arr3[arrResult];

  cout<<"enter the elements of first array: ";
  for(int i=0;i<size1;i++){
    cin>>arr1[i];
  }

  cout<<"enter the elements of second array: ";
  for(int i=0;i<size1;i++){
    cin>>arr2[i];
  }

  for(int i=0; i<size1; i++){
    arr3[i]=arr1[i];
  }

  for(int i=0, j=size1; i<size2 && j<arrResult; i++ , j++){
    arr3[j]=arr2[i];
  }

  for(int i=0; i<arrResult ;i++){
    cout<<arr3[i]<<" ";
  }

  return 0;
}
