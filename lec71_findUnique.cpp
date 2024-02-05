#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
int main(){
  map<int,int> count;
  int arr[]={1,1,2,3,4,2,3};
  for(int i=0; i<7; i++){
    count[arr[i]]++;
  }
  auto minElement = min_element(
    count.begin(),
    count.end(),
    [](auto p1, auto p2) {
      return p1.second < p2.second;
      }
    );      

  for(auto it: count){
    cout<<it.first<<"->"<<it.second<<endl;
  }

  if (minElement != count.end()) {
        std::cout << "Unique element:" << minElement->first
                  << ", count = " << minElement->second << std::endl;
    } else {
        std::cout << "array is empty." << std::endl;
    }

    return 0;
}