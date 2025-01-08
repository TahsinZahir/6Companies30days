
    void matchPairs(int n, char nuts[], char bolts[]) {
        int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,p=0;
        for(int i=0;i<n;i++){
        if(nuts[i]=='!')a++;
        else if(nuts[i]=='#')b++;
        else if(nuts[i]=='$')c++;
        else if(nuts[i]=='%')d++;
        else if(nuts[i]=='&')e++;
        else if(nuts[i]=='*')f++;
        else if(nuts[i]=='?')g++;
        else if(nuts[i]=='@')h++;
        else p++;
        }
        for(int i=0;i<n;i++){
        if(a>0){
            nuts[i]='!';
            a--;
        }
        else if(b>0){
        nuts[i]='#';
        b--;
        }
        else if(c>0){
        nuts[i]='$';
        c--;
        }
        else if(d>0){
        nuts[i]='%';
        d--;
        }
        else if(e>0){
        nuts[i]='&';
        e--;
        }
        else if(f>0){
        nuts[i]='*';
        f--;
        }
        else if(g>0){
        nuts[i]='?';
        g--;
        }
        else if(h>0){
        nuts[i]='@';
        h--;
        }
        else{
        nuts[i]='^';
        p--;
        }
        for(int i=0;i<n;i++){
        bolts[i]=nuts[i];
        }
        }
};

