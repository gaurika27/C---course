//Object is an entity that has two things associated with it, its state/property and behaviour. 
/*
we want the project to have 0bjects and it works with objects so that the program can be more related to real world. 
why we need to be more near the real world?: so that its readibility, manageability and extensibility increases.
therefore, oops is the prgram in which the program revolves around the object.
*/
//class: user defined data type
//object: instance of class
/*
class can be formed as follows:

program:

class Hero{
   //properties
   char name[100];
   int health;
   int level;
};
int main(){
  //creation of objects
  Hero h1;
}
*/

/*
//Getters and Setters

class Hero{
  private
  int health;
  
  public 
  char level;
  
  void print(){
     cout<<level<<endl;
  }
  
  int getHealth(){
   return health;
  }

  char getLevel(){
   return level;
  }

  void setHealth(int h){
   health=h;
  }

  void setLevel(char ch){
   level=ch;
  }

}
*/


/*
//Sizeof
now what if we write the following in int main():
cout<<"size: "<<sizeof(h1)<<endl;

we get the output in which the size of each datatype mentioned in the class Hero is added up,
for ex: the size of all datattypes like char, 2*int is added here.
*/

/*
// sizeof in the case of empty class:
output:
1
explanantion:
in case of empty class, object gets the memory of 1 byte just for the sake of identififcation.
*/
//accessing properties/data members: using dot operators
/*

class Hero{
   //properties
   char name[100];
   int health;
   int level;
};

int main(){
  Hero ramesh;
  cout<<"health is: "<<ramesh.health<<endl;
  cout<<"level is:" is<<ramesh.level<<endl;
  }

output: error 
(coz health and level are private members)
*/

/*
//Access Modiifers Type:
1)public
2)private(by default)
3)protected

1)public(can be accessed from anywhere in the code; from both inside and outside the class)

class Hero{
 public:
 int health;
 int level;
 };

2)private(can be accessed ONLY from inside the class)

3)protected()
*/
