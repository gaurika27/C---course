#include <bits\stdc++.h>
#include <vector>
using namespace std;
int main(){
  vector<vector<int>> matrix={
    {1,2,3,4},
    {5,6,7,8},
    {9,10,11,12}
  };
  int n=matrix.size(), m=matrix[0].size(), 
  left=0, right=m-1, 
  top=0, bottom=n-1;
  vector<int> ans;
  while(top<=bottom && left<=right){
    for(int i=left; i<=right; i++){
      ans.push_back(matrix[top][i]);
  } 
  top++;
  if(top<=bottom){
  for(int i=top; i<=bottom; i++){
    ans.push_back(matrix[i][right]);
  }
  right--;}
  
  if(left<=right){
    for(int i=right; i>=left; i--){
      ans.push_back(matrix[bottom][i]);
      }
      bottom--;
  }

  if(top<=bottom){
    for(int i=bottom; i>=top; i--){
      ans.push_back(matrix[i][left]);
      }
      left++;  
  }

  }

  for(int i=0; i<(n*n); i++){
    cout<<ans[i]<<" ";
  }
  }
