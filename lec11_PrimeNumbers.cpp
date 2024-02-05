#include <iostream>
#include <math.h>
using namespace std;
bool isPrime(int num){
  for(int i=2;i<=sqrt(num);i++){
    if(num%1==0){
      return false;
    }
  }
  return true;
}
int main(){
  int a,b;
  cin>>a>>b;
  for(int i=1;i<=b;i++){
    if(isPrime(i)){
      cout<<i<<endl;
    }
  }
  return 0;
}