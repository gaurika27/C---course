//OOPS_4
//Inheritance:It is possible to inherit attributes and methods from one class to another.
//only public and protected attributes are inherited and the private attributes are not inherited
/*
Types of classes used in inheritance:
1)Derived class(Child):The classs that inherits from another class
2)Base class(parent): The class being inherited from
*/

/*
Types of Inheritance:
1}Single Inheritance
2)Multiple Inheritance
3)Multi-level Inheritance
4)Hybrid Inheritance
5)Hierarchial Inheritance
*/

//1)Single Inheritance: we will be able to inherit the attributes of A into B by single inheritance
// #include <iostream>
// using namespace std;

// class A{
//   public:
//   void func(){
//     cout<<"Inherited";
//   }
// };
// class B: public A{
//   };

// int main(){
//   B b;
//   b.func();
// }

//2)Multiple Inheritance:we will be able to inherit the attributes of A and B class into C by multiple inheritance
// #include <iostream>
// using namespace std;

// class A{
//   public:
//   void Afunc(){
//     cout<<"Func A \n";
//   }
// };

// class B{
//   public:
//   void Bfunc(){
//     cout<<"Func B \n";
//   }
// };

// class C: public A, public B{
//   };


// int main(){
//   C c;
//   c.Afunc();
//   c.Bfunc();
// }

//3)Multi Level Inheritance:B inherits the attributes of A and C inherits the attributes of B 
#include <iostream>
using namespace std;

class A{
  public:
  void Afunc(){
    cout<<"Func A \n";
  }
};

class B:public A{
  public:
  void Bfunc(){
    cout<<"Func B \n";
  }
};

class C:public B{
  };


int main(){
  C c;
  c.Afunc();
  c.Bfunc();
}
//4)Hybrid Inheritance: