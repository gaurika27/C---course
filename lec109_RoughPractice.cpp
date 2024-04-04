#include <bits\stdc++.h>
using namespace std;
// int main(){
//   int arr[]={-2,1,-3,4,-1,2,1,-5,4};
//   int n=sizeof(arr)/sizeof(arr[0]);
//   int maxsum=0;
 
//   for(int i=0; i<n; i++){
//     for(int j=i+1; j<n; j++){
//       int sum=0;
//       for(int k=i; k<=j; k++){
//         sum+=arr[k];
//       }
//       if(sum>maxsum){
//         maxsum=sum;
//       }
//     }
//   }
//   cout<<maxsum;
// }

int main(){
  int arr[]={-2,1,-3,4,-1,2,1,-5,4};
  int n=sizeof(arr)/sizeof(arr[0]);
  int sum=0, maxsum=INT_MIN;
  for(int i=0; i<n; i++){
    sum+=arr[i];
    maxsum=max(sum, maxsum);
    if(sum<0) sum=0;
    
  }
  cout<<maxsum;
}