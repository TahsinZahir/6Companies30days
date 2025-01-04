class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        vector<int>numss=nums;
        sort(numss.begin(),numss.end());
        int i=nums.size()-1,j=0,k=i/2+1;
        while(i>=0){
        if(i%2==1){
            nums[i]=numss[k++];
        }
        else{
            nums[i]=numss[j++];
        }
        i--;
        }
        //tc:O(nlogn),sc:O(1)
    }
};