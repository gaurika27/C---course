//OOPS_2
#include <iostream>
using namespace std;


class student{
  string name; //here the string name is private as it is mentioned before the term public
  public:
  int age;
  bool gender;

   //in order to access it outside the class we need to use the differnt method and it is as follows:

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

};


int main(){

  student arr[3];
  for(int i=0;i<3; i++){
    string s;
    cout<<"Name: ";
    cin>>s;
    arr[i].setName(s);
    cout<<"Age: ";
    cin>>arr[i].age;
    cout<<"Gender: ";
    cin>>arr[i].gender;
  }

  
}