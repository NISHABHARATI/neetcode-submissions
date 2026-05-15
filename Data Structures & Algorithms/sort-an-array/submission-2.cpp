class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        vector<int>ans;
        //selection sort
        int mini = INT_MAX;
        for(int i=0;i<nums.size()-1;i++){
            int mini = i;
            for(int j=i;j<nums.size();j++)
            {
                if(nums[j]<nums[mini]){
                    mini = j;
                }
            }
            swap(nums[i],nums[mini]);
        }
        for(auto it :nums){
            ans.push_back(it);
        }
        return ans;
    }
};