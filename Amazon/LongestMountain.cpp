class Solution {
public:
    int ans=0;
    int longestMountain(vector<int>& arr) {
        for(int i=1;i<arr.size()-1;i++){
        int root=i,a=i-1,b=i+1,c=0,d=i,e=i;
        while(a>=0){
        if(arr[a]<arr[d]){
        c++;
        a--;
        d--;
        }
        else{break;}
        }
        int left=c;
        c=0;
        while(b<arr.size()){
        if(arr[e]>arr[b]){
        c++;
        b++;
        e++;
        }
        else{break;}
        }
        int right=c;
        if(left==0||right==0)c=0;
        else c=left+right;
        ans=max(ans,c);
        }
        if(ans!=0)return ans+1;
        return ans;
    }
};