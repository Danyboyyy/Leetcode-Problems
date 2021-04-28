#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  int majorityElement(vector<int>& nums) {
    int count = 0;
    int majority;
    
    for (int i = 0; i < nums.size(); i++) {
      if (count == 0)
          majority = nums[i];
      
      nums[i] == majority ? count++ : count--;
    }
    
    return majority;
  }
};

int main() {
  vector<int> v = {2, 2, 1, 1, 1, 2, 2};
  Solution sol;

  cout << sol.majorityElement(v);

  return 0; 
}