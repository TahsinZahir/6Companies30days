class Solution {
public:
    int firstUniqChar(string s) {
      vector<int>helper(26,0);
      for(int i=0;i<s.size();i++){
      helper[s[i]-'a']++;
      }  
      for(int i=0;i<s.size();i++){
        if(helper[s[i]-'a']==1)return i;
      }
      return -1;
    }
};