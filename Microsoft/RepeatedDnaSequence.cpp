class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
       unordered_set<string>st;
       unordered_set<string>a;
       vector<string>ans;
       for(int i=0;i<s.size();i++){
        int ss=st.size();
       if(i<s.size()-9){
       st.insert(s.substr(i,10));
       if(ss==st.size())a.insert(s.substr(i,10));
       }
       } 
       for(auto ele:a){
       ans.push_back(ele);
       }
       return ans;
    }
};