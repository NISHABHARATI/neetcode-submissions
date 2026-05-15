class Solution {
public:
    int maxSatisfied(vector<int>& c, vector<int>& g, int m) {
        int ans=0;
        for(int i=0;i<c.size();++i){
            if(g[i]==0)
            ans+=c[i];
        }

        int mx=0,s=0;
        int i=0,j=0;
        while(j<c.size())
        {
            if(g[j]==1){
                s+=c[j];
            }
            if(j-i+1==m)
            {
                mx=max(mx,s);
                if(g[i]==1){
                    s-=c[i];
                }
                i++;
            }
            j++;
        }
        return ans+mx;
    }
};