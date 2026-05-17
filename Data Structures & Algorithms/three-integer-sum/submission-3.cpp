class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(begin(nums),end(nums));
        vector<vector<int>>answer;
        for(int i=0;i<nums.size();i++){
            if (nums[i] > 0) break;
            if (i > 0 && nums[i] == nums[i - 1]) continue;
             int k=i+1;
             int j=nums.size()-1;
            while(k<j){
                 int sum = nums[i] + nums[k] + nums[j];
                if(sum==0){
                   answer.push_back({nums[i], nums[j], nums[k]});
                   k++;j--;
                    while(k < j && nums[k] == nums[k-1])
                    k++;

                while(k < j && nums[j] == nums[j+1])
                    j--;
                }
                else if(sum< 0){
                    k++;
                }
                else{
                    j--;
                }
            }
        }

        return answer;

    }
};
