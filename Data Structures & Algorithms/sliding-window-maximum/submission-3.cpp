class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int i=0,j=0,n= nums.size();
        vector<int>vec;
        multiset<int>st;
        while(j < n){
            st.insert(nums[j]);
            if(j-i+1==k){
                vec.push_back(*st.rbegin());
                st.erase(st.lower_bound(nums[i]));
                i++;
            }
            j++;
        }
        return vec;
    }
};
