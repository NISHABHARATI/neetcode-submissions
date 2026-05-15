class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxSum=0;
        for(int i=0;i<prices.size();i++){
            int num = prices[i];
            for(int j=i+1;j<prices.size();j++){
                 maxSum = max(maxSum,prices[j]-num);
            }
        }
        return maxSum;
    }
};
