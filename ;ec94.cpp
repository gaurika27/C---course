#include <iostream>
using namespace std;

struct node{
  int next;
  int weight;
  node(){
    next=-1;
    weight=0;
  }
  node(int x){
    next=x;
    weight=0;
  }
  node(int x, int y){
    next=x;
    weight=y;
  }

};
