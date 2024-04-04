#include <bits/stdc++.h>
using namespace std;
int main(){
  int arr[]={1,2,3,4,5};
  int k=6;
  int c=0;
  for(int i=0; i<5; i++){
    for(int j=i+1;j<5;j++){
      if(i==j) continue;
      if(arr[i]+arr[j]==k){
        cout<<"yes"<<endl;
        cout<<arr[i]<<"("<<i<<")"<<","<<arr[j]<<"("<<j<<")"<<endl;
        c++;
      }
    }
  }
  cout<<"count is: "<<c<<endl;
}