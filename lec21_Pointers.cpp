//pointers-used to access and modify the variable
// pointers are variables that store the address of other variables.
#include <iostream>
using namespace std;
//for non pointers
// void swap(int a, int b){
//   int temp=a;
//   a=b;
//   b=temp;
//}
void swap(int *a, int *b){
  int temp=*a;
  *a=*b;
  *b=temp;
}
int main(){
  // int a=10;
  // int *aptr;
  // aptr=&a;
  // cout<<&a<<endl; //memory address of a //output: 0x61ff08
  // cout<<aptr<<endl; //memory address of a //output: 0x61ff08
  // cout<<*aptr<<endl; //value of a is shown //dreference // output: 10
  // *aptr=40;
  // cout<<a<<endl; //output: 40
  // a=60;
  // cout<<a<<endl; //output: 60
  

  // // arrays and pointers
  // int arr[]={10,20,30};
  // cout<<*arr<<endl; //output: 10
  // int *ptr=arr;
  // for(int i=0; i<3; i++){  
  //   cout<<*ptr<<endl;
  //   ptr++;
  
  // } /* output: 10
  //              20
  //              30
  //              */


  int a=2;
  int b=4;
  int *aptr=&a;
  int *bptr=&b;
  swap(a,b);
  cout<<a<<" "<<b<<endl; // still gives original values of a and b.
  swap(aptr, bptr);
  cout<<a<<" "<<b<<endl; //swaps now
  return 0;
}