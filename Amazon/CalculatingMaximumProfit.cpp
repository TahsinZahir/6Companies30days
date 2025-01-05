class Solution {
public:
    int arr[1005][105][3]={-1};
    int f(vector<int>&prices,int k,int i,bool on){
    if(i==prices.size()||k==0)return 0;
    if(arr[i][k][on]!=-1)return arr[i][k][on];
    if(on){return arr[i][k][on]=max(-prices[i]+f(prices,k,i+1,false),f(prices,k,i+1,on));}//buy
    else{return arr[i][k][on]=max(prices[i]+f(prices,k-1,i+1,true),f(prices,k,i+1,on));}
    }
    int maxProfit(int k, vector<int>& prices) {
        memset(arr,-1,sizeof(arr));
        return f(prices,k,0,true);//we can purchase
    }
};