class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>count;
        for(auto it :nums){
            count[it]++;
        }
       
      priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>heap;
      for(auto it :count){
        heap.push({it.second,it.first});
        if(heap.size()>k){
            heap.pop();
        }
      }
        vector<int>ans;
        for(int i=0;i<k;i++){
            ans.push_back(heap.top().second);
            heap.pop();
        }
        return ans;
    }
};
