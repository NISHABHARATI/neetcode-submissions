class Solution {
public:
int solution(int n,vector<int>&dp){
    if(n<=0)return 0;
    if(n==1)return 1;
    if(n==2)return 1;
    if(dp[n]!=-1)return dp[n];
    return dp[n]= solution(n-1,dp)+solution(n-2,dp)+solution(n-3,dp);
}
    int tribonacci(int n) {
       vector<int>dp(n+1,-1);
       return solution(n,dp); 
    }
};