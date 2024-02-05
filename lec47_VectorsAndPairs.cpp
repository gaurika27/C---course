//Vectors and pairs
#include <iostream>
#include <vector>
using namespace std;

int main(){
  vector<int> v;
  v.push_back(1); //push_back is used to insert the element in the end of the vector
  v.push_back(2);
  v.push_back(3);
  v.emplace_back(2);//better than push_back


  vector<pair<int,int>> vec;
  vec.push_back({1,3});
  vec.emplace_back(1,2);

  //Traversing and printing methods
  //Method 1
  for(int i=0; i<v.size();i++){
    cout<<v[i]<<endl;
  }
  cout<<endl;

  //Method 2
  //iterator:points to the memory address
  vector<int>::iterator it;
  for(it=v.begin(); it!=v.end(); it++){
    cout<<*it<<endl;
  }
  cout<<endl;

  //better way to define iterator instead of writing these long line of codes:
  for(auto it=v.begin(); it!=v.end(); it++){//auto:itself finds the datatype
    cout<<*(it)<<" ";
  }

  for(auto it:v){// here, auto represents the integer datatype
    cout<<it<<" "; 
  }

  //other stuff with iterators:

  it=it+2;
  cout<<*(it)<<" ";
  vector<int>::iterator it=v.begin();
  vector<int>::iterator it=v.end();//this points to the location right after the last element....it-- : now it reaches the last element
  vector<int>::iterator it=v.rend();//reverse end: this will point to the location just before the first element....it++ : now it reaches the first element(traverses forward)
  vector<int>::iterator it=v.rbegin();//reverse begin: this will point to the location just after the last element.....it++ : now it reaches the last element(traverses backward)

  cout<<v[0]<<" "<<v.at(0);
  cout<<v.back()<<" ";//points to the last element

  v.erase(v.begin()+1);
  v.erase(v.begin()+2, v.begin()+4);

  v.insert(v.begin(),300);
  v.insert(v.begin()+1,2,10);

  vector<int> copy(2,50);
  v.insert(v.begin(),copy.begin(),copy.end());

  cout<<v.size();

  v.pop_back();//removes last element

  //v1.swap(v2) //used to swap the elements of the two vectors.

  v.clear(); //erases the entire vector

  cout<<v.empty(); //checks if the vector is empty or not

  //Method 3
  for(auto element:v){
    cout<<element<<endl;
  }
  cout<<endl;

  v.pop_back();//is used to remove the element present at the last of the vector

  vector<int> v2(3,50);
  //50 50 50

  swap(v, v2);// used to swap the values of the two vectors
  
  for(auto element:v2){
    cout<<element<<endl;
  }  

  return 0;
}

//std::pair->Allows us to store a pair of values

// int main(){
  
//   pair <int,int> p;
//   p.first=1;
//   p.second=2;
  
//   return 0;

// }
