class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>ans;
        set<int>st;
        unordered_map<int,int>mp;
        int n = nums.size()/3;
        for(auto it:nums){
            mp[it]++;
            if(mp[it]>n){
                st.insert(it);
            }
        }
        for(auto it:st){
            ans.push_back(it);
        }
        return ans;
    }
};