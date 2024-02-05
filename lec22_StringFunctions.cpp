//string
#include <iostream>
#include <string>
using namespace std;

int main(){
  // string first; 
  // cin>>first; //only one word or lette is inserted.. i,e.. no spaces allowed..
  //             // word or character after space not taken into consideration
  // cout<<first<<endl;
  // string second(10,'G'); // G repeated 10 times.. i.e, output: GGGGGGGGGG
  // cout<<second<<endl;
  // string third="Gaurika Sharma";
  // cout<<third<<endl;
  // string fourth;
  // getline(cin, fourth);// to get input withspaces, i.e, sentences
  // cout<<fourth;
  // string fifth="Gau";
  // string sixth="rika";
  // fifth.append(sixth); //appending in strings(M1)
  // cout<<fifth<<endl; //output: Gaurika
  // cout<<fifth+sixth<<endl; //appending in strings(M2)... output: Gaurika
  // cout<<fifth[1]; //accessing any element of string (0 based indexing)
  // string seventh="hey how are you?";
  // seventh.clear();
  // cout<<seventh;// clears the complete string
  string eighth="abc";
  string ninth="xyz";
  // cout<<ninth.compare(eighth)<<endl; //compares the length of the two strings
  if(ninth.empty()){ //checks if the string is empty or not
    cout<<"meh";
  } 
  return 0; 
}