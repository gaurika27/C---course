#include <bits/stdc++.h>
using namespace std;
int main(){
  int arr[]={1,1,1,0,0,1,1,1,1,1};
  int n=sizeof(arr)/sizeof(arr[0]);
  int c=0;
  for(int i=0; i<n; i++){
    if(arr[i]==1){
      c++;
    }
    else{
      c=0;
    }
  }
  cout<<c;
}