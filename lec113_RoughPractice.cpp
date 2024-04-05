#include <bits\stdc++.h>
#include <vector>
using namespace std;
#include <iostream> // Add missing include

int main(){
  vector<int> arr={100,4,200,1,3,2};
  sort(arr.begin(),arr.end());
  int n=arr.size(), maxx=1, cnt=1;
  for(int i=0; i<n; i++){
    if(arr[i+1]-arr[i]==1  ){
      cnt++;}
    else {maxx=max(cnt, maxx); cnt=1;}  
  }
  maxx=max(cnt, maxx);
  if(maxx==1) maxx=0;
  
  std::cout<<maxx; // Specify the namespace for "cout"
  
}