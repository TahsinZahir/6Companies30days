class Solution {
public:
    int findTheWinner(int n, int k) {
        queue<int>q;
        for(int i=1;i<=n;i++){
        q.push(i);
        }
         int i=1;
        while(q.size()>1){
        int a=q.front();
        q.pop();
        if(i==k){i=0;}
        else q.push(a);
        i++;
        }
        return q.front();
    }
};