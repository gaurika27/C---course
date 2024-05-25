#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
      vector<int> ans;
      unordered_map<int, vector<int>> occur;
      
      for(int i=0; i<nums.size(); i++){
        if(nums[i]==x){
          occur[x].push_back(i);
        }
      }

      for(int q:queries){
        if(q>occur[x].size()){
          ans.push_back(-1);
        }
        else{
          ans.push_back(occur[x][q-1]);
        }
      }
      return ans;
      }

      int main() {
    std::vector<int> nums = {1, 2, 3, 2, 2, 4, 2, 5};
    std::vector<int> queries = {1, 2, 3, 4, 5};
    int x = 2;

    std::vector<int> result = occurrencesOfElement(nums, queries, x);

    for (int idx : result) {
        std::cout << idx << " ";
    }
    std::cout << std::endl;

    return 0;
}
};