//Sorting in arrays
//1)Selection Sort:Find the minimum element in the unsorted array and swap it with the element in the beginning of the remaining unsorted array

// #include <iostream>
// using namespace std;

// int main(){
//   int n;
//   cin>>n;

//   int arr[n];
//   for(int i=0; i<=n; i++){
//     cin>>arr[i];
//   }

//   for(int i=0; i<=n-1; i++){
//     for(int j=i+1; j<n; j++){
//       if(arr[j]=arr[i]){
//         int temp=arr[j];
//         arr[j]=arr[i];
//         arr[i]=temp;
//       }      
//     }
//   }

//   for(int i=0; i<n; i++){
//     cout<<arr[i]<<" ";
//   }cout<<endl;

//  return 0; 
//  }


 //2)Bubble Sort:Repeatedly swap two adjacent elements if they are in the wrong order. We have to do n-1 iterations before we get our sorted array(n is the number of elements)

//  #include <iostream>
//  using namespace std;

//  int main(){

//   int n;
//   cin>>n;

//   int arr[n];
//   for(int i=0; i<=n; i++){
//     cin>>arr[i];
//   }

//   int counter=1;
//   while(counter<n){
//     for(int i=0; i<n-counter;i++){
//       if(arr[i]>arr[i+1]){
//         int temp=arr[i];
//         arr[i]=arr[i+1];
//         arr[i+1]=temp;
//       }
//     }
//     counter++;
//   }
//   for(int i=0; i<n; i++){
//     cout<<arr[i]<<" ";
//   }cout<<endl;

//   return 0;
//  }

//3)Insertion Sort:Insert an element from unsorted array to its correct position in sorted array

 #include <iostream>
 using namespace std;

 int main(){

  int n;
  cin>>n;

  int arr[n];
  for(int i=0; i<=n; i++){
    cin>>arr[i];
  }
  for(int i=1; i<n;i++){
    int current=arr[i];
    int j=i-1;
    while(arr[j]>current && j>=0){
      arr[j+1]=arr[j];
      j--;
    }
    arr[j+1]=current;
  }
  for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
  }cout<<endl;

  return 0;
 }