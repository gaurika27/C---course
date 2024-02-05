//2-D arrays
/*
#include <iostream>
using namespace std;
int main(){
  int n, m;
  cin>>n>>m;
  //char arr[n][m];
  //bool arr[n][m];
  //float arr[n][m];
  int arr[n][m];
  for(int i=0; i<n;i++){
    for(int j=0; j<m; j++){
      cin>>arr[i][j];
    }
  }
  for(int i=0; i<n;i++){
    for(int j=0; j<m; j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<"\n";
  }
  cout<<"element to be searched: ";
  int x;
  cin>>x;
  for(int i=0; i<n;i++){
    for(int j=0; j<m; j++){
      if(arr[i][j]==x){
        cout<<"element found";
      }
    }
  }
  return 0;
}
*/

//Spiral Order Matrix Transversal
#include <iostream>
using namespace std;
int main(){
  int n, m;
  cin>>n>>m;
  int arr[n][m];
  for(int i=0; i<n;i++){
    for(int j=0; j<m; j++){
      cin>>arr[i][j];
    }
  }  
  int row_start=0, row_end=n-1, column_start=0, column_end=m-1;
  while(row_start<=row_end && column_start<=column_end){
    //for row_start
    for(int col=column_start; col<=column_end; col++){
      cout<<arr[row_start][col]<<" ";
    }
    row_start++;
    //for column_end
    for(int row=row_start; row<=row_end; row++){
      cout<<arr[row][column_end]<<" ";      
    }
    column_end--;
  }
return 0;
}