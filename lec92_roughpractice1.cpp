#include <bits/stdc++.h>
using namespace std;
int main(){
  int arr[]={1,2,0,0,3,0,0,4,0,0,4,3,0,6,0,0,8};
  int n=sizeof(arr)/sizeof(arr[0]);
  int temp[n];
  int j = 0; // counter for non-zero elements
  for(int i=0; i<n; i++){
    if(arr[i]!=0){
      temp[j] = arr[i];
      j++;
      temp[n-j-1]={0};
    }
  }
  for(int i=0; i<sizeof(temp)/sizeof(temp[0]); i++){
    cout<<temp[i]<<" ";
  }

}