// //TC:O(N^3)
// //M1:brute force method
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//   int arr[]={1,2,3,-3,1,1,1,4,2,-3};
//   int n=sizeof(arr)/sizeof(arr[0]);
  
//   int count=0;
//   for(int i=0; i<n; i++){
//     for(int j=i;j<n; j++){
//       int sum=0;
//       for(int k=i; k<=j;k++){
//           sum+=arr[k];
//       }
//       if(sum==3){
//         count++;
//         } 
   
//     }
//   }
   
//   cout<<count<<endl;
// }
// //M2:Better
// //TC:O(N^2)
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//   int arr[]={1,2,3,-3,1,1,1,4,2,-3};
//   int n=sizeof(arr)/sizeof(arr[0]);
  
//   int count=0;
//   for(int i=0; i<n; i++){
//     int sum=0;
//     for(int j=i;j<n; j++){
//       sum+=arr[j];
//       if(sum==3){
//         count++;
//         } 
//     }
    
//   }
   
//   cout<<count<<endl;
// }
//M3
#include <bits/stdc++.h>
#include <vector>
#include <map>
using namespace std;
int main(){
  map<int, int> mpp;
  mpp[0]=1;
  vector<int> arr={1,2,3,-3,1,1,1,4,2,-3};
  int n=arr.size();
  int k=3;
  int preSum=0, cnt=0;
  for(int i=0; i<n; i++){
    preSum+=arr[i];
    int remove=preSum-k;
    cnt+=mpp[remove];
    mpp[preSum]+=1;
  }
  cout<<cnt;

}