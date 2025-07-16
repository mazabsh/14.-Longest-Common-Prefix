#include<iostream> 
#include<vector> 

using namespace std; 

class Solution{
public: 

      string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return ""; 

        string prefix = strs[0]; 
        for(int i=1; i<strs.size(); ++i){
          int j=0; 
          string s = strs[i]; 
          while(j<prefix.size() && prefix[j]==s[j] && j<s.size()) ++j; 
          prefix = prefix.substr(0,j); 
        }
        return prefix; 
      }
};
int main(){
  vector<string> strs = {"flow", "flower", "flight"}; 
  Solution sol; 
  cout << sol.longestCommonPrefix(strs) << endl; 
  return 0; 
}
