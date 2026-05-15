class Solution {
public:
    int solution(int ind,int size,vector<int>& nums,vector<int>&dp){
        if(ind>size)return 0;
        if(dp[ind]!=-1)return dp[ind];
        int sum1 = solution(ind+2,size,nums,dp)+nums[ind];//pick
        int sum2 = solution(ind+1,size,nums,dp);//non-pick
        return dp[ind] = max(sum1,sum2);
    }
    int rob(vector<int>& nums) {
        int n2 = nums.size()-1;
        vector<int>dp(n2+1,-1);
        return solution(0,n2,nums,dp);
    }
};
