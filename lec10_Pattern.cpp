// pattern questions

#include <iostream>
using namespace std;
// rectangle pattern of stars
/*
int main(){
  int row, column;
  cin>>row>>column;
  for(int i=1; i<=row; i++){
    for(int j=1; j<=column; j++){
      cout<<"*";
    }
    cout<<endl;
  }
  return 0;
}
*/
/*
//hollow rectangle pattern
int main(){
  int row, column;
  cin>>row>>column;
  for(int i=1; i<=row; i++){
    for(int j=1;j<=column;j++){
      if(i==1 || i==row){
        cout<<"*";
      }
      else if(j==1 || j==column){
        cout<<"&";
      }
      else{
        cout<<" ";
      }
    }
    cout<<endl;
  }
  return 0;
}
*/
//inverted half pyramid
/*
int main(){
  int n;
  cin>>n;
  for(int i=n;i>=1; i--){
    for(int j=n; j>=1; j--){
      cout<<"*";
    }
    cout<<endl;
  }
  return 0;
}
*/
//half pyramid
/*
int main(){
  int n;
  cin>>n;
  for(int i=1;i<=n; i++){
    for(int j=1; j<=i; j++){
      cout<<"*";
    }
    cout<<endl;
  }
  return 0;
}
*/
//half pyramid swith vertical on the right side
/*
int main(){
  int n;
  cin>>n;
  for(int i=n;i>=1; i--){
    for(int j=n; j>=1; j--){
      if(j<=n-i){
      cout<<"*";
      }
      else{
        cout<<" ";
      }
    }
    cout<<endl;
  }
  return 0;
}
*/
/* number pyramid:
1
22
333
4444
*/
/*
int main(){
  int n;
  cin>>n;
  for(int i=1;i<=n; i++){
    for(int j=1; j<=i; j++){
      cout<<i;
    }
    cout<<endl;
  }
  return 0;
}
*/
/*Floyd's Triangle
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
16 17 18 19 20 21
22 23 24 25 26 27 28
29 30 31 32 33 34 35 36
37 38 39 40 41 42 43 44 45
46 47 48 49 50 51 52 53 54 55
*/
/*
int main(){
  int n;
  cin>>n;
  int count=1;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
      cout<<count<<" ";
      count++;
    }
    cout<<endl;
  }
  return 0;
}
*/
/*
*      *
**    **
***  ***
********
********
***  ***
**    **
*      *
*/
/*
int main(){
  int n;
  cin>>n;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
      cout<<"*";
    }
    int space=2*n-2*i;
    for(int j=1;j<=space;j++){
      cout<<" ";
    }
    for(int j=1;j<=i;j++){
      cout<<"*";
    }
    cout<<endl;
  }
  for(int i=n;i>=1;i--){
    for(int j=1;j<=i;j++){
      cout<<"*";
    }
    int space=2*n-2*i;
    for(int j=1;j<=space;j++){
      cout<<" ";
    }
    for(int j=1;j<=i;j++){
      cout<<"*";
    }
    cout<<endl;
  }
  
  return 0;
}
*/
//inverted pattern
/*
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
*/
/*
int main(){
  int n;
  cin>>n;
  int count=1;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n+1-i;j++){
      cout<<j<<" ";      
    }
    cout<<endl;
  }
  return 0;
}
*/
/*
1 
0 1 
1 0 1 
0 1 0 1 
*/
/*
int main(){
  int n;
  cin>>n;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
      if ((i-j)%2!=0) {
        cout<<"0"<<" ";
      }
      else{
        cout<<"1"<<" ";
      }
    }
    cout<<endl;
  }
  return 0;
}
*/
/*
rhombus pattern
    *****
   *****
  *****
 *****
*****
*/
/*
int main(){
  int n;
  cin>>n;
  for(int i=1; i<=n; i++){ 
    for(int j=1; j<=n-i; j++){
      cout<<" ";
    }
    for(int j=1; j<=n; j++){
      cout<<"*";
    }
    cout<<endl;
  }
  return 0;
}
*/
/*
   1
  1 2
 1 2 3
1 2 3 4
*/
/*/
int main(){
  int n;
  cin>>n;
  for(int i=1; i<=n; i++){
    for(int j=1; j<=n-i; j++){
      cout<<" ";
    }
    for(int j=1; j<=i; j++){
      cout<<j<<" ";
    }
  cout<<endl;  
  }
 return 0;
}
*/
/*
   1
  212
 32123
4321234
*/
/*
int main(){
  int n;
  cin>>n;
  for(int i=1; i<=n; i++){
    for(int j=1; j<=n-i; j++){
      cout<<" ";
    }
    for(int j=i; j>=1; j--){
      cout<<j;
    }
    for(int j=2; j<=i; j++){
      cout<<j;
    }
  cout<<endl;  
  }
 return 0;
}
*/
/*
    *
   ***
  *****
 *******
*********
*********
 *******
  *****
   ***
    *
*/
/*
int main(){
  int n;
  cin>>n;
  for(int i=1; i<=n; i++){
    for(int j=1; j<=n-i; j++){
      cout<<" ";
    }
    for(int j=i; j>=1; j--){
      cout<<"*";
    }
    for(int j=2; j<=i; j++){
      cout<<"*";
    }
  cout<<endl;  
  }
  for(int i=n; i>=1; i--){
    for(int j=1; j<=n-i; j++){
      cout<<" ";
    }
    for(int j=i; j>=1; j--){
      cout<<"*";
    }
    for(int j=2; j<=i; j++){
      cout<<"*";
    }
  cout<<endl;  
  }
 return 0;
}
*/
int main(){
  int n;
  cin>>n;
  for(int i=1; i<=3; i++){
    for(int j=1; j<=n; j++){
      if(((i+j)%4==0) || (i==2 && j%4==0)){
        cout<<"*";
      }
      else{
        cout<<" ";
      }
    }
  cout<<endl;  
  }
  return 0;
}