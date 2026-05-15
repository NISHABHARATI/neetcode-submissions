class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        for(int i=0;i<n;i++){
            int num = nums[i];
            for(int j=i+1;j<n;j++){
                if(nums[j]==num){
                    if(abs(j-i)<=k)
                    return true;
                }
            }
        }
        return false;

    }
};