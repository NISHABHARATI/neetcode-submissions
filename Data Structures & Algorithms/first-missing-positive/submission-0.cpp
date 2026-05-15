class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int missing = 1;
        while(true){
            bool flag = true;
            for(int& it : nums){
                if(missing == it){
                    flag = false;
                    break;
                }
            }
            if (flag) return missing;
            missing++;
        }
    }
};