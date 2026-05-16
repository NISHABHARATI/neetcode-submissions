class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int sum=0,sum2=0,ans=INT_MAX;
        for(auto &it : nums){
            sum += it;
            ans = min(ans,sum);
            if(sum>0){
                sum = 0;
            }
        }
        bool flag=false;
        for(auto it: nums){
            sum2 += it;
        }
        
        int value = sum2-ans;
         sum=0;
         int ans2 = INT_MIN;;
        for(auto &it :nums){
            sum += it;
            ans2 = max(ans2,sum);
            if(sum<0)sum=0;
        }
        if(ans2<0) return *max_element(begin(nums),end(nums));
        return max(ans2,value);
    }
};