// Longest Arithematic subarray
/*Google Kickstart question-An arithematic array is an array that contains at least two integers and the differences
between consecutive integers are equal.Ex:[9,10],[3,3,3], and [9,7,5,3] are arithematic arrays while [1,3,3,7],[2,1,2]
and [1,2,4] are not arithematic arrays.

Saraswati has an arrr of N non-negative integers. The i-th integer of the array is A. She wants to choose a contigous
arithematic subarray from her array that has the maximum length.
determine its length
*/








//MY METHOD
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0; i<n;i++){
    cin>>arr[i];
  }
  int diff[n-1];

  for(int i=0; i<n;i++){
    diff[i]=arr[i+1]-arr[i];
  }
  /*
  for(int i=0; i<sizeof(diff)/sizeof(diff[0]);i++){
      cout<<diff[i]<<" ";
  }
  
  cout<<endl;
  */
  const int MAX_SIZE=100;
  int size = sizeof(diff) / sizeof(diff[0]);

  int frequency[2 * MAX_SIZE + 1] = {0}; // Initialize frequency array with zeros

    for (int i = 0; i < size; i++) {
        frequency[diff[i]+ MAX_SIZE]++;
    }
    /*
    cout << "Element\tFrequency" << endl;
    for (int i = 0; i < 2 * MAX_SIZE + 1; i++) {
        if (frequency[i] > 0) {
            cout << (i-MAX_SIZE) << "\t" << frequency[i] << endl;
            }
    }
    */
  int mx=frequency[0];
  for(int i=0; i<sizeof(frequency)/sizeof(frequency[0]); i++){
    if(frequency[i]>mx){
      mx=frequency[i];
      }
    }
    cout<<mx+1;       
  return 0;
}