//swap using function
#include <iostream>
using namespace std;

//call by reference using pointers
void swapPointer(int* a, int* b){
  int temp=*a;
  *a=*b;
  *b=temp;
}

//call by reference using c++ reference variables
int & swapReferenceVar(int a, int  b){
  int temp=a;
  a=b;
  b=temp;
}


int main(){
int x=4, y=5;
cout<<"the value of a is "<<x<<" the value of y is"<<y<<endl;
// swapPointer(&x,&y);
// cout<<"the value of a is "<<x<<" the value of y is"<<y<<endl;

swapReferenceVar(x,y)=766;
cout<<"the value of a is "<<x<<" the value of y is"<<y<<endl;
return 0;
}