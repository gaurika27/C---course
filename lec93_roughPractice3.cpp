//union of two sorted arrays
#include <bits/stdc++.h>
using namespace std;
int main(){
  int arrA[]={1,1,3,4,4,6};
  int arrB[]={5,6,7,7,7,10};
  set<int> s;

  for(int i=0; i<6; i++){
    s.insert(arrA[i]);
  }

   for(int i=0; i<6; i++){
    s.insert(arrB[i]);
  }

  for(int element: s){
    cout<<element<<" ";
  }
}