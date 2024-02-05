//linear Search
#include <iostream>
#include <climits>
using namespace std;

int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int r;
  cin>>r;
  for(int i=0; i<n;i++){
    if(arr[i]==r){
      cout<<i;
    }
  }
  return 0;

}