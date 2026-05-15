class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size()/2;
        unordered_map<int,int>mp;
        for(auto it: nums){
            mp[it]++;
            if(mp[it] > n){
                return it;
            }
        }
        return 0;
    }
};