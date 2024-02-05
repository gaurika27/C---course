#include <iostream>
using namespace std;

//STRUCTURE

//   typedef struct employee{
//     int id;
//     char favchar;
//     float salary;
//   } me;

//UNIOM:just like struct, but better memory space provided


  union money{
    int rice;
    char car;
    float pounds;
  } me;

int main(){
  enum meal{Breakfast,Lunch,Dinner};
  //method 1
  // cout<<Breakfast;
  // cout<<Lunch;
  // cout<<Dinner;
  //output: 012    :because, index starting from 0 are assigned to all the values
  //method 2
  meal hey=Lunch;
  cout<<(hey==2);

//STRUCTURE

//   struct employee gauri;
//   me gungun;
//   gungun.id=2;
//   gauri.id=1;
//   gauri.favchar='g';
//   gauri.salary=12000000;
//   cout<<gauri.salary<<endl;
//   cout<<gauri.id<<endl;

//UNION



union money m1;
  return 0;


}


