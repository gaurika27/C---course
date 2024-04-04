// #include <bits\stdc++.h>
// using namespace std;
// int main(){
//   int arr[]={1,-2,3,-4,5,6,-7,-8,-9};
//   int ans[sizeof(arr)/sizeof(arr[0])]={0};
//   for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
//     if (arr[i]>0) ans[2*i]=ans[i];
//     else ans[(2*i) +1]=ans[i];

//   }
//   for(int i=0; i<sizeof(arr)/sizeof(arr[0]);i++){
//     cout<<ans[i]<<" ";
//   }
// }
#include <iostream>
#include <vector>
using namespace std; // Using vector for flexibility and potential size changes

int main() {
    vector<int> arr = {1, 2, 3, -4, 5, 6, -7, -8, -9}; // Initialize using vector
   vector<int> ans(arr.size()); // Create output vector with same size as arr

    int positiveIdx = 0, negativeIdx = 1;
    for (int num : arr) {
        if (num > 0) {
            ans[positiveIdx] = num;
            positiveIdx += 2;
        } else {
            ans[negativeIdx] = num;
            negativeIdx += 2;
        }
    }

    for (int num : ans) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0; // Indicate successful program termination
}
