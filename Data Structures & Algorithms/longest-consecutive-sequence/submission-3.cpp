class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)return 0;
        int max_cnt=1,cnt=1;
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1])continue;
            else if(nums[i]-nums[i-1]==1){
                cnt++;
                max_cnt = max(cnt,max_cnt);
            }
            else{
                cnt=1;
            }
        }
        return max_cnt;
    }
};
