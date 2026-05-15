class Solution {
public:
    bool canJump(vector<int>& nums) {
        int mx = 0;
        for(int i = 0; i < nums.size(); ++i){
            int len = nums[i];
            mx=max(mx,i+len);
            if(mx <= i && i < nums.size()-1){
                // cout << mx << " " << i << endl;
                return false;
            }
        }
        return mx>=nums.size()-1;
    }
};
