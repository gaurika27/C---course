#include <iostream>
// there are two types of header files:
// 1. system header files: it comes with the compiler.
// 2. user defined header files: it is written by the programmer
#include "na.h"

using namespace std;

int main(){
    int a=8,b=3;
    cout<<"operators in c++: \n";
    cout<<"following are the operators in c++ \n";
    // arithmatic operators
    cout<<" the value of a + b is: "<<(a+b)<<endl;
    cout<<" the value of a - b is: "<<(a-b)<<endl;
    cout<<" the value of a * b is: "<<(a*b)<<endl;
    cout<<" the value of a / b is: "<<(a/b)<<endl;
    cout<<" the value of a % b is: "<<(a%b)<<endl;
    cout<<" the value of a ++ is: "<<(a++)<<endl;
    cout<<" the value of a -- is: "<<(a--)<<endl;
    cout<<" the value of ++ a is: "<<(++a)<<endl;
    cout<<" the value of -- a is: "<<(--a)<<endl;
    cout<<endl;
    // assignment operators
    cout<<"\n the value of a == b is: "<<(a==b);
    cout<<"\n the value of a != b is: "<<(a!=b);
    cout<<"\n the value of a > b is: "<<(a>b);
    cout<<"\n the value of a < b is: "<<(a<b);
    cout<<"\n the value of a >= b is: "<<(a>=b);
    cout<<"\n the value of a <= b is: "<<(a<=b);
    cout<<endl;
    //logical operators
    cout<<"\n the value of ((a==b) && (a>b)) is: "<<((a<b) && (a>b));//returns 1 iff both conditions are satisfied else the value returned is 0
    // && is logical 'and' operator
    cout<<"\n the value of ((a==b) || (a>b)) is: "<<((a<b) || (a>b));//returns 1 if either of the conditions is satisfied else the value returned is 0
    // || is logical 'or' operator
    cout<<"\n the value of (!(a==b)) is: "<<(!(a==b));//returns the value opposite to what was meant to be
    // ! is 'not' operator 
    return 0;
}
