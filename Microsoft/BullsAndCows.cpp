class Solution {
public:
    string getHint(string secret, string guess) {
        int bulls=0,cows=0;
        for(int i=0;i<guess.size();i++){
        if(secret[i]==guess[i])bulls++;
        }
        vector<int>v1(10,0);
        vector<int>v2(10,0);
        for(int i=0;i<secret.size();i++){
        v1[secret[i]-'0']++;
        v2[guess[i]-'0']++;
        }
        for(int i=0;i<10;i++){
        cows+=min(v1[i],v2[i]);
        }
        cows-=bulls;
        string ans="";
        ans+=to_string(bulls);
        ans+="A";
        ans+=to_string(cows);
        ans+="B";
        return ans;
    }
};