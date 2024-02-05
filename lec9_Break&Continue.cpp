/*
jumps in loops
continue: skip to the next iternation of the loop
break: terminate the loop
*/

//numbers divisible by three should not be printed
//numbers which are prime

/*
#include <iostream>
using namespace std;

int main(){

    for (int i=0; i<100; i++)
    {
        if(i%3==0){
            continue;
        }
        cout<<i<<endl;

    }

    int n;
    cin>>n;

    for (int i=2; i<n; i++)
    {
        if(n%i==0){
            cout<<"non prime"<<endl;
            break;
        }
    } 
    cout<<"prime"<<endl;
    int a,b;
    cin>>a>>b;

    for(int num=a; num<=b; num++){
        int i;
        for(i=2; i<num; i++){
            if(num%i==0){
                break;
            }
        }
        if(i==num){
            cout<<num<<endl;
        }
    }

    return 0;
}
  
*/