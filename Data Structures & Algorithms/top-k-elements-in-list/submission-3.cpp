class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>count;
        for(auto it :nums){
            count[it]++;
        }
        vector<pair<int,int>>res;
        for(auto it:count){
            res.push_back({it.second,it.first});
        }
        sort(rbegin(res),rend(res));
        vector<int>ans;
        for(int i=0;i<k;i++){
            ans.push_back(res[i].second);
        }
        return ans;
    }
};
