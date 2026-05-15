class Solution {
public:
 vector<vector<int>>answer;
void solution(vector<int>& nums,int index,vector<int>&ans){
    if(index >= nums.size()){
        answer.push_back(ans);
        return;
    }
    //pick
    ans.push_back(nums[index]);
    solution(nums,index+1,ans);
    //non-pick
    ans.pop_back();
    solution(nums,index+1,ans);
    
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>ans;
          solution(nums,0,ans);
          return answer;
       
    }
};
