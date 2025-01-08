bool cmp(vector<int>& a, vector<int>& b){
        if(a[0]==b[0]) return a[1] > b[1];
        return a[0] < b[0];
    }
class Solution {
public:
    int maxEnvelopes(vector<vector<int>>& envelopes) {
        int n =envelopes.size();
    
        sort(envelopes.begin(), envelopes.end(), cmp);
        
        vector<int>second;
        
        for(int i = 0;i<envelopes.size();i++){
            int ele = envelopes[i][1];
            int idx = lower_bound(second.begin(), second.end(), ele) - second.begin();// Finding idx of lower bound element which is greater than equal to ele.
            if(idx >= second.size()) second.push_back(ele);
            else second[idx] = ele;
        }
        
        return second.size();
    }
};