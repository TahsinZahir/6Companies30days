class Solution {
public:
    queue<pair<int,int>>q;
    int ans=-1;
    void bfs(vector<vector<int>>& grid,int i,int j){
    for(int i=0;i<grid.size();i++){
    for(int j=0;j<grid[0].size();j++){
    if(grid[i][j]==2){q.push({i,j});grid[i][j]=0;}
    }
    }
    q.push({-1,-1});
    while(!q.empty()){
    int a=q.front().first,b=q.front().second;
    q.pop();
    if(a==-1 && b==-1){ans++;
    if(!q.empty()){q.push({-1,-1});}
    else break;
    }
    if(a>0 && grid[a-1][b]==1){grid[a-1][b]=2;q.push({a-1,b});}
    if(a<grid.size()-1 && grid[a+1][b]==1){grid[a+1][b]=2;q.push({a+1,b});}
    if(b>0 && grid[a][b-1]==1){grid[a][b-1]=2;q.push({a,b-1});}
    if(b<grid[0].size()-1 && grid[a][b+1]==1){grid[a][b+1]=2;q.push({a,b+1});;}
    }
    }
    int orangesRotting(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size(),fo=0;
        bfs(grid,0,0);
        for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
         if(grid[i][j]==1)return -1;   
        }
        }
        return ans;
    }
};