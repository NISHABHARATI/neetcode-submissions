class Solution {
public:
int subarraySum(vector<int>& nums, int k) {
    unordered_map<int,int> m;
    int sum = 0;
    m[0] = 1;
    int ans = 0;
    for(auto &i:nums){
        sum += i;
        int rem = sum-k;
        if(m.count(rem)){
            ans += m[rem];
        }
        m[sum]++;
    }
    return ans;
}
};