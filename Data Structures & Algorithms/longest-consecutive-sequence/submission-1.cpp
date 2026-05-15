class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)return 0;
       sort(begin(nums),end(nums));
       int max_count = 1;
        int cnt=1;
       for(int i = 1;i<nums.size();i++){
        if(nums[i]==nums[i-1])continue;
            if(nums[i]-nums[i-1]==1){
                cnt++;
             max_count = max(max_count,cnt);
            }
            else{
            cnt=1;
            }
       }
       return max_count; 
    }
};
