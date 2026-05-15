class Solution {
public:
vector<vector<int>>answer;
    void solution(vector<int>& nums, vector<int>&ans,int ind,vector<int>&vis){
        if(ans.size() == nums.size()){
            answer.push_back(ans);
            return;
        }
        if(ind >= nums.size()){
            return;
        }
        for(int i=0;i<nums.size();i++){
            // if(i>ind && nums[i]==nums[i-1])continue;
            //break
            if(vis[i]== 1)continue;
            ans.push_back(nums[i]);
            vis[i]=1;
            solution(nums,ans,ind+1,vis);
            ans.pop_back();
            vis[i]=0;
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int>ans;
        vector<int>vis(nums.size(),0);
        solution(nums,ans,0,vis);
        return answer;
    }
};
