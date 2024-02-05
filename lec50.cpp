//OOPS_3
#include <iostream>
using namespace std;

class student{
  string name;
  public: 
  int age;
  bool gender;

//Constructor:  

//Default Constructor: used when we don't  use any constructor
   student(){
    cout<<"Default Constructor"<<endl;
   }

//Parameterised Constrcutor: As it ahs parameters.
   student(string s, int a, int g){
    cout<<"Parameterised constructor"<<endl;
    name=s;
    age=a;
    gender=g;
   }

//Copy Constrcutor.
   student(student &a){
    cout<<"Copy Constructor"<<endl;
    name=a.name;
    age=a.age;
    gender=a.gender;
   }

//Destructor
   ~student(){
    cout<<"Destructor called"<<endl;
    }  

   void setName(string s){
    name=s;
   }

   void getName(){
    cout<<name<<endl;
   }
      

   void printInfo(){
    cout<<"Name: ";
    cout<<name<<endl;
    cout<<"Age: ";
    cout<<age<<endl;
    cout<<"Gender: ";
    cout<<gender<<endl;
   }

   //Operator overloading
   bool operator == (student &a){
      if(name==a.name && age==a.age && gender==a.gender){
         return true;
      }
      return false;
   }

};

int main(){

  student a("Gauri",20,1); // for parameterised constructor
  a.printInfo();

  student b; //for default constructor 

  student c=a; //For copy constructor

  //for operator overloading
  if(c==a){
   cout<<"same"<<endl;
  }else{
   cout<<"not same"<<endl;
  }

  return 0;
}
