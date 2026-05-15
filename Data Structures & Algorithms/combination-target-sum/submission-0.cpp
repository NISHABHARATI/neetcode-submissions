class Solution {
public:
    vector<vector<int>> answer;
    void solution(vector<int>& nums, int target,vector<int>&ans,int index){
        if(target == 0){
            answer.push_back(ans);
            return;
        }
        if(target < 0){
            return;
        }
        if(index >= nums.size()){
            return ;
        }
        //pick
        ans.push_back(nums[index]);
        solution(nums,target-nums[index],ans,index);
        //not-pick
        ans.pop_back();
        solution(nums,target,ans,index+1);
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int>ans;
        solution(nums,target,ans,0);  
        return answer;
    }
};
