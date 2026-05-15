class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int i=0,j=0;
        multiset<int>st;
        vector<int>ans;
        int n = nums.size();
        while(j< n){
            st.insert(nums[j]);
            if(j-i+1 == k){
                int val = *(st.rbegin());
                ans.push_back(val);
                st.erase(st.lower_bound(nums[i]));
                i++;
            }
            j++;
        }
        return ans;
    }
};
