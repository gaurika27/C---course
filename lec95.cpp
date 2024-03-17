//disjoint set union
#include <bits/stdc++.h>
using namespace std;
struct DSU{
  int n;
  vector<int> par, size;
  DSU(int t_n):n(t_n), par(t_n), size(t_n){
    for(int i=0; i<n;i++){
      par[i]=i;
      size[i]=1;
    }
  }
  int find_parent(int node){
    if(par[node]==node) return node;
    else par[node]=find_parent(par[node]);
  }
};