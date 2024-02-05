//recursion

#include <iostream>
using namespace std;
int s(int n){ // sum of all numbers till n
  if(n==0){
    return 0;
  }
  int prevsum=s(n-1);
  return n+prevsum;
  }

int p(int n, int r){ // power of a number
  if(r==0){
  return 1;
  }
  int prevpower=p(n, r-1);
  return n*prevpower;
  }
int f(int n){
  if(n==0){
    return 1;
  }
  return n*f(n-1);
}
int main(){
  int n, r;
  cin>>n>>r;
  cout<<s(n)<<" ";
  cout<<p(n,r)<<" ";
  cout<<f(n);
  return 0;
}

// check if an array is sorted or not
/*
#include <iostream>
using namespace std;
bool sorted(int arr[], int n){
  if(n==1){
    return true;
  }
  bool restArray=sorted(arr+1, n-1);
  return (arr[0]<arr[1] && restArray);
}
int main(){
  int arr[]={1,2,3,4,5};
  cout<<sorted(arr,5)<<" ";
  return 0;
}
*/
//print numbers im imcreasing and decreasing order
// #include <iostream>
// using namespace std;
// int main(){
  
// }