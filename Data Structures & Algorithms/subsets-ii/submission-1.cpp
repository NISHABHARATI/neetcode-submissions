class Solution {
public:
vector<vector<int>>answer;
    void solution(vector<int>& nums, vector<int>&ans,int ind){
        if(ind == nums.size()){
            answer.push_back(ans);
            return;
        }
        if(ind >= nums.size()){
            return;
        }
        //pick
        ans.push_back(nums[ind]);
       solution(nums,ans,ind+1);
       ans.pop_back();
       solution(nums,ans,ind+1);
        
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int>ans;
        set<vector<int>>st;
        sort(begin(nums),end(nums));
        solution(nums,ans,0);
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
