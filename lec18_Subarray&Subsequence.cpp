// subarray: continuous part of the array
// number of subarrays of an array with n elements=nC2+n=(n*(n+1))/2
//Subsequence : a sequence that can be derivedd from an array by selecting zero or more elements, without changing the order of the remaining elements.
//number of subsequences of an array with n elements=2^n
//every subarray is a subsequence but every subsequence is not a subarray.


//sum of subarrays
/*
int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0; i<n;i++){
    cin>>arr[i];
  }
  int s=0;
  for(int i=0; i<n; i++){
    s=0;
    for(int j=i;j<n;j++){
      s+=arr[j];
      cout<<s<<endl;
    }
  }
  return 0;
}
*/


