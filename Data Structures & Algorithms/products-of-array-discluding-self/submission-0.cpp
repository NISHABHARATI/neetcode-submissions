class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int count = 0;
        int size = nums.size();
        for(auto &it: nums){
            if(it == 0){
                count++;
            }
        }
        vector<int>ans(nums.size(),0);
        if(count>=2){
            return ans;
        }
        int p=1;
        for(int i=0;i<size;i++){
            if(nums[i]!=0)
            p *= nums[i];
        }
        for(int i =0;i<size;i++){
            if(nums[i]==0 && count ==1){
                ans[i] = p;
            }
            else if(count ==1 && nums[i]!=0){
                ans[i]=0;
            }
            else{
                ans[i] = p/nums[i];
            }
        }
        return ans;
    }
};
