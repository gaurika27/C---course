/*
Find Unique

Given an integer array of size 2N + 1. In this given array, N numbers are present twice and one number is present only once in the array.
You need to find and return that number which is unique in the array.
Note : Given array will always contain odd number of elements.
Input format :

Line 1 : Array size i.e. 2N+1
Line 2 : Array elements (separated by space)

Output Format :

Unique element present in the array

Constraints :
1 <= N <= 10^3
Sample Input :

7
2 3 1 6 3 6 2

Sample Output :

1

*/

/*
Algorithm
we use XOR(^) here
We know that 0^a=a and a^a=0
so if an array has elements:1,2,3,4,2,1,3; then if we apply XOR to all elements:1^2^3^4^2^1^3;
we get 4 because 1^1=0, 2^2=0, 3^3=0 and 0^4=4

_______________________________________________________________________________________________________
*/

#include <iostream>
using namespace std;
int main(){
  int ans=0;
  int n;
  int arr[n]={1,2,3,4,2,3,1};
  for(int i=0; i<n; i++){
    ans=ans^arr[i];
  }
  return ans;
}