#include <bits/stdc++.h>
#include <iostream>
using namespace std;
function<void(int)> bfs = [&](int node){
  queue<int> q;
  q.push(node);
  while(q.size()){
    int size=q.size();
    for(int i=0; i<size; i++){
      int now=q.front(); q.pop();
      cout<<now<<" ";
      vis[now]=1;
      for(auto next: graph[now]){
        if(!vis[next]){
          vis[next]=1;
          q.push(next);
        }
      }
    }
  }
}