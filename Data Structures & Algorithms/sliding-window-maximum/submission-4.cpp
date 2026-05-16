class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int i=0,j=0,n= nums.size();
        vector<int>vec;
        deque<int> dq;
        while(j < n){
            while(!dq.empty() && dq.back()<i) dq.pop_back();
            while(!dq.empty() && nums[dq.front()] < nums[j]) dq.pop_front();
            dq.push_front(j);
            if(j-i+1==k){
                vec.push_back(nums[dq.back()]);
                i++;
            }
            j++;
        }
        return vec;
    }
};
