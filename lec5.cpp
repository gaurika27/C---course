#include <iostream>
#include <iomanip>
using namespace std;
int main(){

  int a=25;
  cout<<"the value of a was: "<<a<<endl;
  a=72;
  cout<<"the value of a is: "<<a<<endl;

  char c='c';
  c='4';
  
  //constants in c++
  const int a=27;
  cout<<"the value of a was: "<<a<<endl;

  //manipulators in c++

  int a=1,b=21,c=321,d=4321;
  cout<<"the value of a without setw is: "<<a<<endl; 
  cout<<"the value of b without setw is: "<<b<<endl;
  cout<<"the value of c without setw is: "<<c<<endl;
  cout<<"the value of d without setw is: "<<d<<endl;
  
  cout<<"the value of a is: "<<setw(4)<<a<<endl;
  cout<<"the value of b is: "<<setw(4)<<b<<endl;
  cout<<"the value of c is: "<<setw(4)<<c<<endl;
  cout<<"the value of d is: "<<setw(4)<<d<<endl;
  
    return 0;
}