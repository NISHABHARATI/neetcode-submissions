class Solution {
public:
    int solution(vector<int>& nums,int index,int xorr){
        if(index >= nums.size()){
            return xorr;
        }
        //pick
        int pick1 = solution(nums,index+1,xorr^nums[index]);
        //not-pick
        int pick2 = solution(nums,index+1,xorr);
        return pick1+pick2;
    }
    int subsetXORSum(vector<int>& nums) {
        return solution(nums,0,0);
    }
};