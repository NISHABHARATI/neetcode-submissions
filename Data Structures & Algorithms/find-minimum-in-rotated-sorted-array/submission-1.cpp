class Solution {
public:
    int findMin(vector<int> &nums) {
        int n = nums.size();
       int low = 0,high = n-1,ans=INT_MAX;
       while(low<=high){
        int mid = low+(high-low)/2;
        //sorted array
        if(nums[mid]>=nums[low]){
            ans = min(nums[low],ans);
            low = mid+1;
        }
        else{
            high = mid-1;
            ans = min(ans,nums[mid]);
        }
       }
       return ans;
    }
};
