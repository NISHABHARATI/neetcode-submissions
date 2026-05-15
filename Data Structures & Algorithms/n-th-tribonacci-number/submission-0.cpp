class Solution {
public:
int solution(int n){
    if(n<=0)return 0;
    if(n==1)return 1;
    if(n==2)return 1;
    // if(dp[n]!=-1)return dp[n];
    return solution(n-1)+solution(n-2)+solution(n-3);
}
    int tribonacci(int n) {
    //    vector<int>dp(n+1,-1);
       return solution(n); 
    }
};