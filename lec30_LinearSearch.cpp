// //8/8/23 
// //question1

#include <iostream>
using namespace std;

int & insert_element(int N, int arr[], int x, int k){
  N++;
  for(int i=N; i>=k; i--){
    arr[i]=arr[i-1];
  }
  arr[k-1]=x;
  return *arr;
}

int main(){
  int N, arr[N], k, x;
  cout<<"enter the number of elements: ";
  cin>>N;
  cout<<"enter: ";
  for(int i=0; i<N; i++){
    cin>>arr[i];
  }
  cout<<"enter the integer to be added: ";
  cin>>x;
  cout<<"enter the position at which the integer has to be added:";
  cin>>k;
  insert_element(N,arr,x,k);

   for(int i=0; i<(N+1); i++){
    cout<<arr[i];
  }
}


//question 2

// #include <iostream>
// using namespace std;

// int linear_search(int N, int arr[], int x){
//     for (int i = 0; i < N; i++)
//         if (arr[i] == x)
//             return i;
//     return -1;
// }


//   int main(){
//   int N, arr[N], x;
//   cout<<"enter the number of elements: ";
//   cin>>N;
//   cout<<"enter: ";
//   for(int i=0; i<N; i++){
//     cin>>arr[i];
//     }
//   cout<<"enter the number to be searched: ";  
//   cin>>x;
//       int result = linear_search(N, arr, x);
//       (result == -1)
//         ? cout << "Element is not present in array"
//         : cout << "Element is present at index " << result;
    
//   }
  