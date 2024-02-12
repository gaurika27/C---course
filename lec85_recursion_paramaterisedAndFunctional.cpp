//Sum of N numbers
//Parameterised recursion
#include <iostream>
using namespace std;
int sumParameterised(int i,int sum){
  if(i<i){;
    cout<<sumParameterised;
    return 0;
    }
  sumParameterised(i-1,sum+i);
}
int sumFunctional(int n){
  if(n==0) return 0;
  return n+sumFunctional(n-1);
}
int main(){
  int n;
  cout<<"Enter n";
  cin>>n;
  cout<<sumParameterised(n,0);
  cout<<sumFunctional(n);
}
//Functional Recursion 