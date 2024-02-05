//binary search
#include <iostream>
using namespace std;

int binary_search(int arr[], int l, int r, int x){
  while(l<=r){
    int m=l+(r-l)/2;

    if(arr[m]==x)
    return m;

    if(arr[m]<x)
    l=m+1;

    else
    r=m-1;
  }
  return -1;
} 

int main(){
  int arr[]={2,3,4,5,6};
  int x;
  cin>>x;
  int n=sizeof(arr)/sizeof(arr[0]);
  int result=binary_search(arr, 0, n-1, x);
  (result==-1)
      ?cout<<"not present"
      :cout<<"element present at "<<result;
  return 0;  
}