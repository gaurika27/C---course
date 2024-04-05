//Next Permutation
#include <bits\stdc++.h>
using namespace std;
int main(){
  vector<int> arr={2,1,5,3,4,9,1};
  int ind=-1;
  int n=arr.size();
  for(int i=n-2; i>=0; i--){
    if(arr[i]<arr[i+1]){ 
    ind=i;
    break;
    }
  }
  if(ind==-1){
    reverse(arr.begin(),arr.end());
  }
  cout<<ind<<" "<<arr[ind]<<endl;
  for(int nums: arr) cout<<nums<<" ";
  cout<<endl;
  for(int i=n-1; i>ind; i--){
    if(arr[i]>arr[ind]){
      swap(arr[i], arr[ind]);
      break;
    }
  }
  for(int nums: arr) cout<<nums<<" ";
  cout<<endl;
  reverse(arr.begin()+ind+1, arr.end());
  for(int nums: arr) cout<<nums<<" ";
  cout<<endl;
}