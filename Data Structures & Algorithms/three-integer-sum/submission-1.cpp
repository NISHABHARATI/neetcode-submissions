class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>answer;
        set<vector<int>>st;
        sort(begin(nums),end(nums));
        for(int i=0;i<nums.size()-2;i++){
            int sum1 = nums[i];
            for(int j=i+1;j<nums.size()-1;j++){
                int sum2 = nums[j];
                for(int k=j+1;k<nums.size();k++){
                    if(sum1+sum2+nums[k]==0){
                        vector<int>ans;
                        ans.push_back(nums[i]);
                        ans.push_back(nums[j]);
                        ans.push_back(nums[k]);
                        st.insert(ans);
                    }
                }
            }
        }
        for(auto &it : st){
            answer.push_back(it);
        }
        return answer;
    }
};
