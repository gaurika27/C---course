// Optimal solution 1(Sum):
// TC:O(n)
// SC:O(1)
// Optimal solution 2(XOR):
// TC:O(n)
// SC:O(1)

#include <bits/stdc++.h>
using namespace std;
int main(){
  int arr[]={1,2,4,5};
  int xor1=0;
  int xor2=0;
  for(int i=0; i<4; i++){
    xor1^=arr[i];
  }
  for(int i=1; i<=5;i++){
    xor2^=i;
  }
  cout<<(xor1^xor2);
}

