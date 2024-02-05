#include <iostream>
using namespace std;
 
//move all x to the end of the string

string moveallx(string s){
  if(s.length()==0){
    return "";
  }
  char ch=s[0];
  string ans=moveallx(s.substr(1));
  if (ch=='x'){
    return ans+ch;
  }
  return (ch+ans);  
}

int main(){
  cout<<moveallx("asdxxxdfdscxxcdxdcdcxxsxx")<<endl;
  return 0;
}