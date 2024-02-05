//Mapping of 2D array into 1D:
/*
for a 2D matrix arr[i][j]
Row major order:
k=j+(i*total_no._of_columns)
Column major order
k=i+(j*total_no._of_rows)
*/

#include <iostream>
using namespace std;
int main(){
  int arr_2D[2][3]={{1,2,3},{4,5,6}}, arr[2*3];
  for(int i=0; i<2; i++){
    for(int j=0; j<3; j++){
      int k=j+(i*3);
      arr[k]=arr_2D[i][j];
      k++;
    }
  }

  for(int i=0; i<2; i++){
    for(int j=0; j<3; j++){
      cout<<*(arr+(i*3)+j);
    }
    cout<<endl;
  }

  for(int i=0; i<6 ;i++){
    cout<<arr[i]<<" ";
  }  


}