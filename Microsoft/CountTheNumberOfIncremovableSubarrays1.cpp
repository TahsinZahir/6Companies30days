class Solution {
public:

        bool isInc(vector<int>& nums,int i,int j){
        int prev=0;
        for(int k=0;k<nums.size();k++){
        if(k>=i && k<=j)continue;
        if(nums[k]<=prev)return false;
        prev=nums[k];
        }
        return true;
        }
        int incremovableSubarrayCount(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
        for(int j=i;j<nums.size();j++){
        if(isInc(nums,i,j))ans++;
        }
        }
        return ans;
    }
};