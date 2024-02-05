#include <iostream>
using namespace std;

int c=27;

int main(){
    
    //******************built in data types**************************
    int a, b, c;
    cout<<"enter the value of a: "<<endl;
    cin>>a;
    cout<<"enter the value of b: "<<endl;
    cin>>b;
    c=a+b;
    cout<<"the sum is: "<<c<<endl;
    cout<<"the global variable c is: "<<::c;// :: is called the 'scope resolution' operator
        

    //*****************literal data types*********************
    float d=25.5f; // f or  F is used to tell that the number is float otherwise it is used as long double by default
    long double e=3.145173L; // l or L or is used to tell that the number is long double
    cout<<"the value of d is "<<d<<endl<<"the value of e is "<<e;  
    cout<<endl;
    // 'sizeof()' is used to tell the size 
    cout<<"the size of 34.4 is: "<<sizeof(34.4)<<endl;// output is 8 here because its 64bit system and 1 byte consists of 8 bits so it will take minimum 1 byte and hence it shows 8as answer. by default it takes 34.4 as double.
    cout<<"the size of 34.4f is: "<<sizeof(34.4f)<<endl;
    cout<<"the size of 34.4F is: "<<sizeof(34.4F)<<endl;
    cout<<"the size of 34.4l is: "<<sizeof(34.4l)<<endl;
    cout<<"the size of 34.4L is: "<<sizeof(34.4L)<<endl;


    
    //********************reference variables*****************************
    // if we want to take same value and callit by different reference names, we use this
    float x=25;
    float& y = x;
    cout<<x<<endl;
    cout<<y<<endl;
    
    
    //***************typecasting********************
    // converting one data type into another is called typecasting
    int a=27;
    float b=25.975;

    cout<<"the value of a is: "<<(float)a<<endl;
    cout<<"the value of a is: "<<float(a)<<endl;

    int c= int (b);
    cout<<"the value of c: "<<c<<endl;
    
    cout<<"the value of b is: "<<b<<endl;
    cout<<"the value of the expresssion a+b is: "<<a+b<<endl;
    cout<<"the value of the expresssion a+ int(b) is: "<<a+ int(b)<<endl;
    cout<<"the value of the expresssion a+(int)b is: "<<a+ (int)b<<endl;

    return 0;
}
