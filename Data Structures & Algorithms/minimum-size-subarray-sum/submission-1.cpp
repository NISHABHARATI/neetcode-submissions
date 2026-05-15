class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0,j=0;
        int sum = 0;
        int answer = INT_MAX;
        int length = nums.size();
        while(j<length){
            //computation
            sum+= nums[j];
            //condition
            while(sum >= target){
                answer = min(answer,j-i+1);
                sum -= nums[i];
                i++;
            }
            
            j++;
        }
        return answer == INT_MAX ? 0 : answer;
    }
};