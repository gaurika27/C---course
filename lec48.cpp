//OOPS_1
#include <iostream>
using namespace std;

class student{
  public:   //By default all members of the class private and cannot be accessed from outside the class. so we use the term public to make the members after the term public, public. members before the term public are private.
  string name;
  int age;
  bool gender;

  void printInfo(){
    cout<<"Name: ";
    cout<<name<<endl;
    cout<<"Age: ";
    cout<<age<<endl;
    cout<<"Gender: ";
    cout<<gender<<endl;
  }
};

int main(){

  //Method 1 for object
  student a;
  a.name="Gauri";
  a.age=20;
  a.gender=1;


  //Method 2 for object
  student arr[3];
  for(int i=0;i<3; i++){
    cout<<"Name: ";
    cin>>arr[i].name;
    cout<<"Age: ";
    cin>>arr[i].age;
    cout<<"Gender: ";
    cin>>arr[i].gender;
  }

  for(int i=0; i<3;i++){
    arr[i].printInfo();

  }

  return 0;
}