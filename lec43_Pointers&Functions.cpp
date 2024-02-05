//pointers and functions
#include <iostream>
using namespace std;

void print(int* p){
  cout<<*p<<endl;
}

void incrementPointer(int* p){
  p=p+1;
}

void incrementPointerr(int* p){
  (*p)++;
}

int main(){
  int i=10;
  int* p=&i;

  print(p); //out[ut:  10]

  cout<<p<<endl;
  incrementPointer(p);
  cout<<p<<endl;

  //output
  /*
  0x61ff08
  0x61ff08
  */
  cout<<*p<<endl;
  incrementPointerr(p);
  cout<<*p<<endl;

  /*
  Output:

  10
  11
  */
}