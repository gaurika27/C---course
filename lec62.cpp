//Transpose of a 2D matrix
#include <iostream>
using namespace std;
int main(){
  int n;
  int A[n][n]={{1,2},{3,4}};
  int B[n][n];

  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      B[i][j]=A[j][i];
    }
  }

  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      cout<<A[i][j];
    }
    cout<<endl;
  }

  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      cout<<B[i][j];
    }
    cout<<endl;
  }

}