class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++)
            {
                if(nums[i]<nums[j]){
                    swap(nums[i],nums[j]);
                }
            }
        }
        for(auto it :nums){
            ans.push_back(it);
        }
        return ans;
    }
};