class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0;
        int maxVal = 0;
        for(int i =prices.size()-1;i>=0;i--){
              maxVal = max(maxVal,prices[i]);
             ans = max(ans,maxVal-prices[i]);
        }
        return ans;
    }
};
