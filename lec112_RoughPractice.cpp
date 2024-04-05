#include <bits/stdc++.h>
using namespace std;
int main(){
  int arr[]={1,2,3,-3,1,1,1,4,2,-3};
  int n=sizeof(arr)/sizeof(arr[0]);
  
  int count=0;
  for(int i=0; i<n; i++){
    for(int j=i;j<n; j++){
      int sum=0;
      for(int k=i; k<=j;k++){
          sum+=arr[k];
      }
      if(sum==3){
        count++;
        } 
   
    }
  }
   
  cout<<count<<endl;
}