#include <iostream>
#include <list>
#include <deque>
#include <stack>
#include <queue>
#include <set>
using namespace std;

//list
void explainList(){
  list<int> ls;
  ls.push_back(2);//{2}
  ls.emplace_back(4);//{2,4}
  ls.push_front(5);//{5,2.4}
  ls.emplace_front();//{2,4}

  //rest function same as vector
}

//Deque
void explainDeque(){
  deque<int> dq;
  dq.push_back(2);
  dq.emplace_back(4);
  dq.push_front(5);
  dq.emplace_front();
  dq.pop_back();
  dq.pop_front();
  dq.back();
  dq.front();
}
  //same as vecotr and list

  //Stack:LIFO
void explainStack(){
  stack<int> st;
  st.push(1);
  st.push(2);
  st.push(3);
  st.push(4);
  st.emplace(5);

  cout<<st.top();
  st.pop();
  cout<<st.top();
  cout<<st.size();
  cout<<st.empty();
  stack<int> st1,st2;
  st1.swap(st2);
}

// Function	Time Complexity	Space Complexity
// s.top( )	     O(1)            O(1)
// s.pop( )	     O(1)            O(1)
// s.empty( ) 	   O(1)            O(1)
// s.push(x )	   O(1)            O(1)

//Queue
void explainQueue(){
  queue<int> q;
  q.push(1);
  q.push(2);
  q.push(3);
  q.push(4);
  q.emplace(5);
  q.back()+=5;

  cout<<q.back();
  q.pop();
  cout<<q.front();
  cout<<q.size();
  cout<<q.empty();

}

// Function	Time Complexity	 Space Complexity
// q.push(x)	     O(1)             O(1)
// q.pop( )	     O(1)             O(1)
// q.front( )	   O(1)             O(1)
// q.back( )	     O(1)             O(1)
// q.empty( )	   O(1)             O(1)
// q.size( )	     O(1)             O(1)

//Priority queue: stores the element with highest priority(greater element) at the top


// //Function	Time Complexity 	Space Complexity
//   Q.top()       	O(1)              O(1)
//   Q.push()	      O(log n)          O(1)
//   Q.pop()	      O(log n)          O(1)
//   Q.empty()      O(1)             O(1)


//Set: Stores in sorted order and also has unique elements

void explainSet(){
  set<int> st;
  st.insert(1);//{1}
  st.emplace(2);//{1,2}
  st.insert(2);//{1,2}
  st.insert(4);//{1,2,4}
  st.insert(3);//{1,2,3,4}

  //Funcctionality of vector can be usedd in vector alsso as it increases the efficiency

  //begin(),end,rbegin,rend,size,empty,swap, can also be used

  //{1,2,3,4,5}

  auto it=st.find(3);
  auto it=st.find(6);

  st.erase(3);//takes logarithmic time

  int cnt=st.count(1);
  auto it=st.find(3);

  st.erase(it);//takes constant time

  auto it1=st.find(2);
  auto it2=st.find(4);
  st.erase(it1,it2);
  //let us assume that if before erase st={!,2,3,4,5}
  //after erase it will be st={1,3,5}


  
// Function	Time Complexity	  Space Complexity
// s.find( )	    O(log n)             O(1)
// s.insert(x)	  O(log n)             O(1)
// s.erase(x)	  O(log n)             O(1)
// s.size()	    O(1)                 O(1)
// s.empty( )	  O(1)                 O(1)


//Multiset:sorted but not unique: by key

//Map: Sorted and Unique
void explainMap(){
  map<int,int> mpp1;
  map<int, pair<int,int>> mpp2;
  map<pair<int,int>, int> mpp3;

  mpp1[1]=2;
  mpp1.emplace({3,1});
  mpp1.insert({1,2});
  mpp3[{2,3}]=10;
   
}


}
