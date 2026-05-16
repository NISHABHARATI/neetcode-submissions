class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size(),sum=0,index=0;
        for(int i=0;i<nums.size()-1;i++){
            if(index < i) return false;
            index = max(index,i+nums[i]);
        }
        return index>=n-1;
    }
};
