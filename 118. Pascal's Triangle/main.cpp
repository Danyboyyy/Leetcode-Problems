#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  vector<vector<int> > generate(int numRows) {
    vector<vector<int> > pascal;
    
    if (numRows == 0)
        return pascal;
    
    pascal.push_back({1});
    
    for (int i = 1; i < numRows; i++) {
        vector<int> row;
        vector<int> prev = pascal[i - 1];
        
        row.push_back(1);
        
        for (int j = 1; j < i; j++) {
            row.push_back(prev[j - 1] + prev[j]);
        }
        
        row.push_back(1);
        
        pascal.push_back(row);
    }
    
    return pascal;
  }
};

int main() {
  vector<vector<int> > ans;
  Solution sol;

  ans = sol.generate(5);

  for (int i = 0; i < ans.size(); i++) {
    for (int j = 0; j < ans[i].size(); j++) {
      cout << ans[i][j] << " ";
    }
    cout << endl;
  }
  

  return 0;
}