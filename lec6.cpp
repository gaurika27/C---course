#include <iostream>
using namespace std;
int main(){
    int age;
    cout<<"tell me your age: ";
    cin>>age;

//=============================================selection control structure: if else is else if ladder============================================================
    if((age<18) && (age<=0)){
        cout<<"you are not el>igible to vote"<<endl;        
    }
    else if(age==18){
        cout<<"start voting!"<<endl;
    }
    else{
        cout<<"you are eligible to vote"<<endl;
    }
    

//============================================selection control structure: switch case statements================================================================
    switch (age)
    {
    case 18:
        cout<<"you are 18"<<endl;
        break;
    case 1:
        cout<<"you are 1"<<endl;
        break;
    case 22:
        cout<<"you are 22"<<endl;
        break;
    case 12:
        cout<<"you are 12"<<endl;
        break;
    case 16:
        cout<<"you are 16"<<endl;
        break;
    case 25:
        cout<<"you are 25"<<endl;
        break;         
        
    default:
        cout<<"no special cases"<<endl;
        break;
    }

    cout<<"done with switch case";
        
    
    return 0; 

}