#include <iostream>
using namespace std;
int fact(int n){
  int s=1;
  for(int i=2;i<=n;i++){
    s*=i;
  }
  return s;
}
int main(){
  int n,r;
  cin>>n>>r;
  int ans=fact(n)/(fact(r)*fact(n-r));
  cout<<ans<<endl;
  return 0;
}
