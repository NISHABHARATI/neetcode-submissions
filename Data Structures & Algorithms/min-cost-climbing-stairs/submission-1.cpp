class Solution {
public:
int solution(vector<int>& cost,int ind,int n,vector<int>&dp){
    if(ind >= n)return 0;
    if(dp[ind]!=-1)return dp[ind];
    int one = cost[ind]+solution(cost,ind+1,n,dp);
    int second = cost[ind]+solution(cost,ind+2,n,dp);
    return dp[ind] = min(one,second);
}
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int>dp(n+1,-1);
       return min(solution(cost,0,n,dp),solution(cost,1,n,dp));
    }
};
