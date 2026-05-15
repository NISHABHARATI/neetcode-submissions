class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int profit =0,maxPrice=0;
        for(int i= n-1;i>=0;i--){
           maxPrice = max(maxPrice,prices[i]);
            profit = max(profit,maxPrice-prices[i]);
        }
        return profit;
    }
};
