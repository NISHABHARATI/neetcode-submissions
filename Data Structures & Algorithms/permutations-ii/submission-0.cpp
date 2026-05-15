class Solution {
public:
vector<vector<int>>answer;
    void solution(vector<int>& nums,vector<int>&ans,vector<int>&vis){
        if(ans.size() == nums.size()){
            answer.push_back(ans);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(vis[i] == 0){
                ans.push_back(nums[i]);
                vis[i]=1;
                solution(nums,ans,vis);
                ans.pop_back();
                vis[i]=0;
            }
            
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<int>ans;
        set<vector<int>>st;
        vector<int>vis(nums.size(),0);
        solution(nums,ans,vis);
         for(auto &it: answer){
            st.insert(it);
        }
        answer.clear();
        for(auto &it: st){
            answer.push_back(it);
        }
        return answer;
    }
};