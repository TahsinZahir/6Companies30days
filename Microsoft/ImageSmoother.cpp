class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int m=img.size(),n=img[0].size(),i,j;
        vector<vector<int>>ans1(m,vector<int>(n,0));
        for(i=0;i<m;i++){
        for(j=0;j<n;j++){
             int ans=0,c=1;
        ans+=img[i][j];
        if(i>=1){ans+=img[i-1][j];c++;}
        if(j>=1){ans+=img[i][j-1];c++;}
        if(j<n-1){ans+=img[i][j+1];c++;}
        if(i<m-1){ ans+=img[i+1][j];c++;}
        if(i>=1 && j<n-1){ans+=img[i-1][j+1];c++;}
        if(i<m-1&&j<n-1){ans+=img[i+1][j+1];c++;}
        if(i>=1 && j>=1){ans+=img[i-1][j-1];c++;}
        if(i<m-1 && j>=1){ans+=img[i+1][j-1];c++;}
        // cout<<ans<<" "<<c<<endl;
        ans1[i][j]=ans/c;
        }
        }
        return ans1;
    }
};